/*
** EPITECH PROJECT, 2021
** derniere espoir
** File description:
** main
*/

#include "push.h"

int main(int ac, char **av)
{
    both list;
    list.l_a = emptyList();
    list.l_b = emptyList();
    int i = 0;
    int p = 0;
    for (int t = 1; t < ac; t++) {
        list.l_a = addAt(list.l_a, char_to_int(av[t]), i);
        i++;
    }
    if (list.l_a == NULL) {
        return (84);
    }
    p = checklist(list);
    if (p == 1) {
        my_putstr("\n");
        return (0);
    }
    list = radix_pls(list);
    move_sb();
    return (0);
}