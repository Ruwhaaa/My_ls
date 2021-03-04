/*
** EPITECH PROJECT, 2017
** ls.c
** File description:
**
*/

#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include "struct.h"

int ls_base(struct list **head)
{
	DIR	*dir;
	struct dirent *entry;
	struct list *calc;
	dir = opendir("./");
	calc = malloc(sizeof(*calc));
	calc->compteur = 0;

	while ((entry = readdir(dir)) != NULL) {
			push_front(entry, head, calc);
			calc->compteur++;
		}
	print(head);
	free(calc);
	closedir(dir);
	return (0);
}

int push_front(struct dirent *entry, struct list **head, struct list *calc)
{
	struct list *element = NULL;
	
	while (calc->compteur != 0) {
		element = malloc(sizeof(*element));
		element->s = entry->d_name;
		calc->compteur--;
		element->next = *head;
		*head = element;
	}
	return (0);
}

void print(struct list **head)
{
	struct list *ptr;
	ptr = *head;

	while (ptr != NULL) {
		if (ptr->s[0] != '.') {
			my_putstr(ptr->s);
			my_putchar('\n');
		}
		ptr = ptr->next;
	}
}
