/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-camillia.hammou
** File description:
** print
*/

#include "push.h"

int my_put_nbr(int v)
{
    int i = 1, k = 0, x = i / 10, a;
    if (v < 0) {
        my_putchar('-');
        v = -v;
    }
    if (v == 0) {
        my_putchar(48);
        return (1);
    }
    while (i <= v) {
        i = i * 10;
        k = k + 1;
    }
    while (k != 0) {
        a = v / x;
        v = v - (x * a);
        x = x / 10;
        my_putchar(a + 48);
        k = k - 1;
    }
}
