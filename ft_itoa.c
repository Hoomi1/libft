#include "libft.h"

/*int		condition(int n)
{
	if (n == -2147483648)
	write(1, &n, 11);
	if ( n == 2147483647)
	write(1, &n, 10);
}*/

int		check(int n)
{
	int i;
	
	i = 0;
	while (n != 0)
	{
		if (n < 0)
			n *= -1;
		n = n / 10;
		i++;
	}
	return (i);
}

int		equals(int c)
{
	if (c > 0)
		return (1);
	else
		return (2);
}

char		*ft_itoa(int n)
{
	size_t				l;
	unsigned char		*str;
	long int			number;

	number = n;
	l = equals(n) + check(number);
	if (!(str = (char *)malloc(sizeof(char) * l)))
		return (NULL);
	if (number == 0)
		*str = '0';
	if (number < 0)
	{
		*str = '-';
		number *= -1;
	}
	/* if(number == -2147483648 || number == 2147483647)
	   return (condition(number));*/
	while (number)
	{
		l--;
		str[l - 1] = (number % 10) + 48;
		number = number / 10;
	}
	l = equals(n) + check(n);
	str[l - 1] = '\0';
	return (str);
}