/*
** EPITECH PROJECT, 2017
** flag.c
** File description:
** 
*/

#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include "struct.h"

int pathname(struct list **head, char **argv)
{	
	DIR	*dir;
	struct list *calc;
	struct dirent *entry;
	calc = malloc(sizeof(*calc));
	calc->compteur = 1;
	int i = 1;
	dir = opendir(argv[i]);

	while ((entry = readdir(dir)) != NULL) {
		push_front(entry, head, calc);
		calc->compteur++;
	}
	closedir(dir);
	print(head);
	return(0);
}

int multi_argument()
{
	return (0);
}
