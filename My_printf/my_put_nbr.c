/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int	my_put_nbr(int nb)
{
int	a;

if (nb < 0){
    my_putchar('-');
    nb = nb * (-1);
}
if (nb >= 0) {
    if (nb >= 10) {
        a = (nb % 10);
        nb = (nb - a) / 10;
        my_put_nbr(nb);
        my_putchar(48 + a);
        }else {
        my_putchar(48 + nb % 10);
    }
}
}

long long my_put_nbr_long(long long nb, char *str)
{
long long a;

if (nb < 0){
    my_putchar('-');
    nb = nb * (-1);
}
if (nb >= 0) {
    if (nb >= 10) {
        a = (nb % 10);
        nb = (nb - a) / 10;
        my_put_nbr(nb);
        my_putchar(48 + a);
        }else {
        my_putchar(48 + nb % 10);
    }
}
}
