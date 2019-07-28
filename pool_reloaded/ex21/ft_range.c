#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*dest;
	int		i;

	dest = NULL;
	if (min >= max)
		return (NULL);
	i = 0;
	dest = (int*)malloc(sizeof(*dest) * (max - min));
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
