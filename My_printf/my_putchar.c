/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
