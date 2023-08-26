/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** neg
*/

void my_putchar(char c);

double neg(double a)
{
    if (a < 0){
        my_putchar('-');
        a = - a;
        return (a);
    }else {
    a = a;
    return (a);
    }
}
