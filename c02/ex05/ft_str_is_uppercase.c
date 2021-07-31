int	ft_str_is_uppercase(char *str)
{
	int	count;

	if (str[0] == '\0')
		return (1);
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A' || str[count] > 'Z')
			return (0);
		count++;
	}
	return (1);
}
