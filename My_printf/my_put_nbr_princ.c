/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_put_nbr_princ
*/

#include <stdlib.h>
#include <stdarg.h>

void my_putchar(char c);

int nbr_princ(unsigned long nbr, int l, char const *princ)
{
    int z = 0;
    int a = 0;

    if (nbr > 0) {
        a = nbr % l;
        nbr_princ(nbr / l, l, princ);
        my_putchar(princ[a]);
    }
    return (0);
}

int my_put_nbr_princ(unsigned long nbr, char const *princ)
{
    int l = 0;

    while (princ[l] != '\0')
        l++;
        if (nbr == 0) {
        my_putchar('0');
        return (0);
    }
    return (nbr_princ(nbr, l, princ));
}
