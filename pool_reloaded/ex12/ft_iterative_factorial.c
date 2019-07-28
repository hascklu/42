int		ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb >= 0 && nb < 13)
	{
		while (nb >= 1)
			result = result * nb--;
		return (result);
	}
	else
		return (0);
}
