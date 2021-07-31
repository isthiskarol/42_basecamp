int	ft_iterative_factorial(int nb)
{
	int		number;
	int		result;

	number = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (number <= nb)
	{
		result *= number;
		number++;
	}
	return (result);
}
