/*
** EPITECH PROJECT, 2021
** derniere espoir
** File description:
** push
*/

#ifndef PUSH_H_
#define PUSH_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>


typedef struct liste
{
    int data;
    struct liste *next;
}liste;

typedef struct both
{
    liste *l_a;
    liste *l_b;
}both;

int char_to_int(char *nbr);
void printList(liste *L);
liste *freeAt(liste *L, int pos);
liste *addAt(liste *L, int data, int pos);
void printList(liste *L);
int isEmptyliste(liste *L);
liste *emptyList(void);
int my_put_nbr(int v);
void my_putchar(char c);
long lenliste(liste *L);
both move_ra(both liste_all);
int getAt(liste *L, int pos);
both move_pb(both liste_all);
both move_pa(both liste_all);
both move_rb(both liste_all);
void move_sb(void);
int my_putstr(char const *str);
int checklist(both list_all);
both radix_pls(both liste_all);
static liste *createCell(int);
both neg_radix_pls(both liste_all);
#endif
