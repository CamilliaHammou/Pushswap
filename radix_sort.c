/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-camillia.hammou (copie 4)
** File description:
** radix_sort
*/

#include "push.h"

both pb_rb(both list_all)
{
    if (list_all.l_b != NULL) {
        list_all = move_pb(list_all);
        list_all = move_rb(list_all);
    }else{
        list_all = move_pb(list_all);
    }
}

both pa_ra(both list_all)
{
    if (list_all.l_a == NULL) {
        list_all = move_pa(list_all);
    }else{
        list_all = move_pa(list_all);
        list_all = move_ra(list_all);
    }
}

both radix_pls(both list_all)
{
    int i = lenliste(list_all.l_a);
    int j = 0;
    for (long long p = 1; p < 2147483648; p *= 2) {
        for (int nbr = 0; nbr < i; nbr++) {
                if ((list_all.l_a->data & p) != 0) {
                    list_all = pb_rb(list_all);
                }else {
                list_all = move_ra(list_all);
                }
        }
        j = lenliste(list_all.l_b);
        for (int r = 0; r < j; r++) {
            list_all = pa_ra(list_all);
        }
    }
    list_all = neg_radix_pls(list_all);
    return (list_all);
}

both neg_radix_pls(both list_all)
{
    int i = lenliste(list_all.l_a);
    int j = 0;

    for (long long t = 0; t < i; t++) {
        if ((list_all.l_a->data & 2147483648) != 0) {
            list_all = move_pb(list_all);
        }else{
            list_all = move_ra(list_all);
        }
    }
    j = lenliste(list_all.l_b);
    for (int rt = 0; rt < j; rt++) {
        list_all = move_pa(list_all);
    }
    return (list_all);
}