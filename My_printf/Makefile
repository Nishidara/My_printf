##
## EPITECH PROJECT, 2022
## B-CPE-101-LYN-1-1-myprintf-elias.abassi
## File description:
## Makefile
##

SRC	=	flags.c	\
		my_print_digits.c	\
		my_printf.c \
		my_put_float.c	\
		my_put_nbr_princ.c	\
		my_put_nbr.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		neg.c	\


OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
