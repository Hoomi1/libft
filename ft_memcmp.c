
#include "libft.h"

int		ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	unsigned char	*str1;
	unsigned char	*str2;
	
	str1 = buf1;
	str2 = buf2;
	while ((*str1 == *str2) && *str1 && count)
	{
		str1++;
		str2++;
		count--;
	}
	if (count == 0)
		return (0);
	else
	{
		return (*str1 - *str2);
	}
}