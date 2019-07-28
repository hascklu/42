#include "../includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char		*str1;
	unsigned char		*str2;
	size_t				i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}
