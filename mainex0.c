#include <unistd.h>

void	ft_putnbr(int nb);
int		power(int count);
int		countknockoff(int num);

int	main(void)
{
	ft_putnbr(3);
	write(1, " ", 1);
	ft_putnbr(-3);
	write(1, " ", 1);
	ft_putnbr(0);
	write(1, " ", 1);
	ft_putnbr(-32345);
	write(1, " ", 1);
	ft_putnbr(-530203234);
	write(1, " ", 1);
	ft_putnbr(-2147483648);
	write(1, " ", 1);
	ft_putnbr(2147483647);
}
