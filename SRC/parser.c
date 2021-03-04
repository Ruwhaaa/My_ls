/*
** EPITECH PROJECT, 2017
** parser.c
** File description:
** detecting input command
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int stock(struct parser **header, struct list **head, int argc, char **argv)
{
	struct parser *element = NULL;
	struct parser *calc;
	calc = malloc(sizeof(*calc));
	calc->compteur = 0;
	int i = 0;
	
	while (calc->compteur != argc) {
		element = malloc(sizeof(*element));
		element->tab = argv[i];
		if (element->tab[0] == '-') {
			parser_flag(header, element);
		}
		calc->compteur++;
		i++;
		parser(head, argc, argv);
		element->next = *header;
		*header = element;
	}
	return (0);
}

void parser(struct list **head, int argc, char **argv)
{
	if (argc == 1) {
		ls_base(head);
	}
	if (argc == 2) {
		pathname(head, argv);
	} 
	if (argc > 2) {
		multi_argument();
	}
} 

void parser_flag(struct parser **header, struct parser *element)
{
	printf("%s\n" ,element->tab);
}
