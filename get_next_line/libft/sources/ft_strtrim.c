#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		end;

	i = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while (ft_isspace(s[i]) == 1)
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	if (s[end] == '\0')
		end--;
	while (ft_isspace(s[end]) == 1)
		end--;
	if ((str = ft_strsub(s, i, end - i + 1)) == 0)
		return (0);
	return (str);
}
