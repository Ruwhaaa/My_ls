/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
**
*/

#include <dirent.h>

#ifndef LIST_H_
# define LIST_H_
                    
struct list
{
	char *s;
	struct list *next;
	int compteur;
};

struct parser
{
	char *tab;
	struct parser *next;
	int compteur;
};

int ls_base(struct list **head);
int my_putstr(char const *str);
void my_putchar(char c);
void display_nbr(int n, int b, int nb);
char *my_revstr(char *);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void print(struct list **head);
int push_front(struct dirent *entry, struct list **head, struct list *calc);
int pathname(struct list **head, char **argv);
void number(int nb, char *str);
int decimal_nbr(char *str);
int multi_argument();
void parser(struct list **head, int argc, char **argv);
int stock(struct parser **header, struct list **head, int argc, char **argv);
void parser_flag(struct parser **header, struct parser *element);

#endif /* !LIST_H_ */
