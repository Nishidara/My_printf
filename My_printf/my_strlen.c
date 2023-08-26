/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_strlen
*/

#include <unistd.h>

int my_strlen(char *str)
{
int a = 0;
while (str[a] != '\0'){
    a++;
}
return (a);
}

int my_intlen(int z)
{
    int b = 0;
    int c = 0;
    while (z > 0) {
        b = z % 10;
        z = z - b ;
        z = z / 10 ;
        c++;
    }
return (c);
}
