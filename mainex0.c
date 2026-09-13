#include <unistd.h>

void	ft_putnbr(int nb);
int		power(int count);
int		countknockoff(int num);

int	main(void)
{
	ft_putnbr(3);
	ft_putnbr(-3);
	ft_putnbr(0);
	ft_putnbr(-32345);
	ft_putnbr(-530203234);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
}
