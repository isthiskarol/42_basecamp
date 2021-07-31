int	ft_str_is_numeric(char *str)
{
	int	count;

	if (str[0] == '\0')
		return (1);
	count = 0;
	while (str[count] != 0)
	{
		if (str[count] < '0' || str[count] > '9')
			return (0);
		count++;
	}
	return (1);
}
