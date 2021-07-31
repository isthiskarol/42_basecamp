int	ft_atoi(char *str)
{
	int	count;
	int	number;
	int	sign;

	count = 0;
	number = 0;
	sign = 1;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		number = (str[count] - '0') + (number * 10);
		count++;
	}
	return (number * sign);
}
