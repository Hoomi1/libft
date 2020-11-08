
#include "libft.h"

void	*ft_memchr(const void *array, int c, size_t n)
{
	const char	*arr;
	int			i;

	arr = array;
	i = 0;
	while (i < n)
	{
		if (arr[i] == (char)c)
			return (array + i);
		i++;
	}
	return (NULL);
}