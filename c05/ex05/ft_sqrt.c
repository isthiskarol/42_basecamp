int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	while (nb >= number && number < 46341)
	{
		if (number * number == nb)
			return (number);
		++number;
	}
	return (0);
}
