/*
** EPITECH PROJECT, 2022
** B-CPE-101-LYN-1-1-myprintf-elias.abassi
** File description:
** my_put_float2
*/

void my_putchar(char c);
int my_putstr(char *str);
long long my_put_nbr_long(long long nb, char *str);

int gain_space2(int a, double nb, double c, char *str)
{
    if (nb / c)
    return (a);
}

int suite_floatv2(int a, double nb, double c, char *str)
{
    for (nb / c; nb == 0 && c == 0;) {
        return (my_putstr("-NAN"));
    }
    for (nb / c; nb == 0 && c > 0;) {
        a = 0.000000;
        return (a);
    }
    for (nb / c; nb > 0.000000 && c == 0.000000;) {
        return (my_putstr("INF"));
    }
    for (nb / c; nb == 0 && c < 0;) {
        a = -0.000000;
        return (a);
    }
}

int suite_float2v2(double nb, double c, char* str)
{
    int a = 0;
    int b = 1000000;
    long princ = nb;
    long virg = nb * (float)1000000;
    double virg2;
    virg = virg - princ * 1000000;
    virg2 = (double)virg;
    a = a + my_put_nbr_long(princ, "0123456789");
    my_putchar('.');
    for (virg2; virg2 < b / 10; b = b / 10) {
        my_putchar('0');
    }
    gain_space2(a, nb, c, str);
    if (nb > 0.000001 && c > 0.000000){
        a = a + my_put_nbr_long((long)virg2, "0123456789");
        return (a);
    } else {
        a = my_put_nbr_long(virg2, "0123456789");
        return (a);
    }
}

void my_put_float2(int a, double nb, double c, char* str)
{
    if (nb / c){
        if (nb == 0 && c <= 0){
        suite_floatv2(a, nb, c, str);
        } else {
        suite_float2v2(nb, c, str);
        }
    } else {
        suite_float2v2(nb, c, str);
    }
}
