/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** put_nbr
*/

#include <stdio.h>
#include <stdlib.h>
#include "struct.h"

int my_put_nbr(int nb)
{
	char *str;
	int i = 0;
	str = malloc(sizeof(char)*11);

	if (nb < 0) {
		nb = nb * -1;
		while (nb != 0) {
			str[i] = nb %10 + '0';
			nb = nb / 10;
			++i;
		}
		my_revstr(str);
		str[i] = '\0';
		decimal_nbr(str);
	}
	if (nb > 0) {
		number(nb, str);
	}
	return (0);
}

void number(int nb, char *str)
{
	int i = 0;

	while (nb != 0) {
		str[i] = nb %10 + '0';
		nb = nb / 10;
		++i;
	}
	my_revstr(str);
	str[i] = '\0';
	my_putstr(str);
	my_putchar(' ');
}

int decimal_nbr(char *str)
{
	int d = 0;
	int c = 0;
	char *s;
	s = malloc(sizeof(char)*11);

	s[d] = '-';
	d++;
	while (str[c] != '\0') {
		s[d] = str[c];
		c++;
		d++;
	}
	c++;
	s[c] = '\0';
	my_putstr(s);
	my_putchar(' ');
	free(str);
	return(0);
}
