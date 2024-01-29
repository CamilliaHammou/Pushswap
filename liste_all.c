/*
** EPITECH PROJECT, 2021
** derniere espoir
** File description:
** listee_all
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "push.h"

static liste *createCell(int data)
{
    liste *list = malloc(sizeof(liste));
    if (!list) {
        return NULL;
    }
    list->data = data;
    list->next = NULL;

    return list;
}

int getAt(liste *l, int pos)
{
    int i = 0;
    if (isEmptyliste(l)) {
        return -1;
    }
    while (i < pos) {
        i++;
        l = l->next;
    }
    return (l->data);
}

liste *addAt(liste *L, int data, int pos)
{
    liste *prec = L;
    liste *cur = L;
    int i = 0;
    liste *cell = createCell(data);
    if (pos == 0) {
        cell->next = L;
        return cell;
    }
    i = 0;
    while (i < pos) {
        i++;
        prec = cur;
        cur = cur->next;
    }
    prec->next = cell;
    cell->next = cur;

    return L;
}

liste *freeAt(liste *L, int pos)
{
    liste *prec = L;
    liste *cur = L;
    int i = 0;
    if (isEmptyliste(L)) {
        return NULL;
    }
    if (pos == 0) {
        L = L->next;
        free(cur);
        return L;
    }
    i = 0;
    while (i < pos) {
        i++;
        prec = cur;
        cur = cur->next;
    }
    prec->next = cur->next;
    free(cur);
    return L;
}