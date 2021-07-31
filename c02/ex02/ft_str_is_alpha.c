int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	count;

	if (str[0] == '\0')
		return (1);
	count = 0;
	while (str[count] != '\0')
	{
		if (!is_alpha(str[count]))
			return (0);
		count++;
	}
	return (1);
}
