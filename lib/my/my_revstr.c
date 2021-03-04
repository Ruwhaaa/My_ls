/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** revstr
*/

#include <stdio.h>

char *my_revstr(char *str)
{
	int i = 0;
	int c;
	int j = 0;

	while (str[i+1] != '\0') {
		i = i + 1;
	}
	while (i > j) {
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i = i - 1;
		j = j + 1;
	}
	return (str);
}
