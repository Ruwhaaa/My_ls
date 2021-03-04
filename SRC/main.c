/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int main(int argc, char **argv)
{
	struct list *head = NULL;
	struct parser *header = NULL;

	stock(&header, &head, argc, argv);
	return (0);
}
