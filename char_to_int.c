/*
** EPITECH PROJECT, 2021
** B-CPE-110-MAR-1-1-pushswap-camillia.hammou
** File description:
** char_to_int
*/

int char_to_int(char const *str)
{
    long nub = 0;
    int i = 0;
    int compteur = 0;
    while ((str[i] > 47 && str[i] < 59) || str[i] == 40 || str[i] == 45) {
        if (str[i] == 45) {
            compteur = compteur + 1;
        }
        else if (str[i] != 43) {
            nub = nub * 10 + str[i] - 48;
            if (nub > 2147483647 || nub < -2147483648) {
                return 0;
            }
        }
        i = i + 1;
    }
    if (compteur % 2 != 0) {
        nub = nub * -1;
    }
    return nub;
}