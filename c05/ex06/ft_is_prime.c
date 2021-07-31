int	ft_is_prime(int nb)
{
	int	remainder;
	int	number;

	remainder = 0;
	number = 1;
	while (nb >= number)
	{
		if (nb % number == 0)
			remainder++;
		number++;
	}
	if (remainder == 2)
		return (1);
	return (0);
}
