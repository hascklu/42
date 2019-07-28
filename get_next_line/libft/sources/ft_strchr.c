#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a])
	{
		if (s[a] == c)
			return ((char *)s + a);
		a++;
	}
	if (s[a] == c)
		return ((char *)s + a);
	return (NULL);
}
