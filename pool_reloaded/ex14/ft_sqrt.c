int		ft_sqrt(int nb)
{
	int		n;

	n = 1;
	while (n < nb)
	{
		if (n * n == nb)
			return (n);
		else
			n++;
	}
	return (0);
}
