all: ex0 ex1 ex2

ex0:	mainex0.c ex0/ft_putnbr.c
	cc -Werror -Wall -Wextra $^ -o ft_putnbr

ex1:	mainex1.c ex1/ft_print_comb.c
	cc -Werror -Wall -Wextra $^ -o ft_print_comb

ex2:	mainex2.c ex2/ft_print_comb2.c
	cc -Werror -Wall -Wextra $^ -o ft_print_comb2
