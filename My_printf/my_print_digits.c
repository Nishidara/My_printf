/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_print_digits
*/

#include <unistd.h>

void my_putchar(char c);

int my_print_digits(int i)
{
i = 48;
while (i >= 47 && i <= 57) {
    my_putchar(i++);
    my_putchar('\n');
    }
}
