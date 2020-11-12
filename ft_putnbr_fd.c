#include "libft.h"

int power(int n)
{
	size_t p = 1;
	int i = 1;
	ft_itoa(n);
	while (n[i])
	{
		p = p * 10;
		i++ ;
	}
	return (p);
}

void ft_putnbr_fd(int n, int fd)
{
	size_t i;
	int a;
	int k;

	i = n;
	k = 0;
	a = 1;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = -i;
	}
	power(i);
	while (i[k])
	{
		ft_putchar_fd(*i, fd);
		i++;
	}
	/*while ((i = i/10) > 0)
		a *= 10;
	while (a > 0)
	{
		i = n % 1;
		ft_putchar_fd(i + '0', fd);
		n -= i * 10;
		a /= 10;
	}*/
}