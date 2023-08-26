/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_putstr
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char *str)
{
int a = 0;

while (str[a] != '\0') {
    my_putchar(str[a]);
    a++;
}
return 0;
}
