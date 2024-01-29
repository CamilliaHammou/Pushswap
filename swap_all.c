/*
** EPITECH PROJECT, 2021
** derniere espoir
** File description:
** swap_all
*/
#include "push.h"

both move_ra(both liste_all)
{
    int i = lenliste(liste_all.l_a);

    liste_all.l_a = addAt(liste_all.l_a, (liste_all.l_a->data), i);
    liste_all.l_a = freeAt(liste_all.l_a, 0);
    write(1, "ra ", 3);

    return (liste_all);
}

both move_rb(both liste_all)
{
    int i = lenliste(liste_all.l_b);

    liste_all.l_b = addAt(liste_all.l_b, (liste_all.l_b->data), i);
    liste_all.l_b = freeAt(liste_all.l_b, 0);
    write(1, "rb ", 3);

    return (liste_all);
}

both move_pb(both liste_all)
{
    int i = getAt(liste_all.l_a, 0);
    liste_all.l_a = freeAt(liste_all.l_a, 0);
    liste_all.l_b = addAt(liste_all.l_b, i, 0);
    write(1, "pb ", 3);

    return (liste_all);
}

both move_pa(both liste_all)
{
    int i = getAt(liste_all.l_b, 0);
    liste_all.l_b = freeAt(liste_all.l_b, 0);
    liste_all.l_a = addAt(liste_all.l_a, i, 0);
    write(1, "pa ", 3);

    return (liste_all);
}

void move_sb(void)
{
    write(1, "sb\n", 3);
}