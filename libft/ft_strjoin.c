#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	char	*ret;

	a = 0;
	if (!s1 || !s2)
		return (0);
	ret = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (0);
	while (*s1)
	{
		ret[a] = *s1;
		s1++;
		a++;
	}
	while (*s2)
	{
		ret[a] = *s2;
		s2++;
		a++;
	}
	ret[a] = '\0';
	return (ret);
}
