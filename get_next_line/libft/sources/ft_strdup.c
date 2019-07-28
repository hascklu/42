#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	int			i;

	i = 0;
	s2 = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s1 || !s2)
		return (NULL);
	ft_strcpy(s2, s1);
	return (s2);
}
