#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		neg;

	neg = 0;
	i = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		res = res + (int)str[i] - '0';
		res = res * 10;
		i++;
	}
	if (neg == 1)
		return (-res / 10);
	return (res / 10);
}
