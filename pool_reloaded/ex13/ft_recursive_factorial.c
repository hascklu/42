int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb >= 13 || nb < 1)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
