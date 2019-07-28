#include "../includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned char		*str;
	size_t				i;

	str = (unsigned char*)src;
	i = 0;
	while (src[i])
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
