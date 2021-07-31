int	ft_str_is_lowercase(char *str)
{
	int	count;

	if (str[0] == '\0')
		return (1);
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'a' || str[count] > 'z')
			return (0);
		count++;
	}
	return (1);
}
