#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;

	d = dest;
	s = src;
	i = 0;
	while (n)
	{
		d[i] = s[i];
		if (d[i] == (char)c)
			return (dest);
		i++;
		n--;
	}
	return (dest);
}