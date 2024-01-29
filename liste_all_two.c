/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-camillia.hammou (copie 4)
** File description:
** liste_all_two
*/

#include "push.h"

liste *emptyList(void)
{
    return NULL;
}

int isEmptyliste(liste *L)
{
    return L == NULL;
}

long lenliste(liste *L)
{
    long len = 0;
    while (L) {
        len++;
        L = L->next;
    }
    return len;
}

void printList(liste *L)
{
    while (L) {
    my_put_nbr(L->data);
    my_putchar(' ');
        L = L->next;
    }
    my_putchar('\n');
}

int checklist(both list_all)
{
    int i = 0;
    int j;

    while (list_all.l_a->next) {
        i = list_all.l_a->data;
        list_all.l_a = list_all.l_a->next;
        j = list_all.l_a->data;
        if (i > j) {
            return (0);
        }
    }
    return (1);
}