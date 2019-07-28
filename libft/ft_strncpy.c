#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char*)src;
	i = 0;
	while (i < len && src[i])
	{
		dst[i] = str[i];
		i++;
	}
	while (i < len)
		dst[i++] = 0;
	return (dst);
}
