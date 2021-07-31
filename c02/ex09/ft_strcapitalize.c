void	ft_upper(char *str, int count)
{
	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;
}

char	ft_lower(char *str, int count)
{
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] += 32;
		}
		count++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	while ((str[count] >= '0' && str[count] <= '9')
		|| (str[count] >= 'A' && str[count] <= 'Z')
		|| (str[count] >= 'a' && str[count] <= 'z'))
	{
		ft_lower(str, count);
		ft_upper(str, 0);
		count = 0;
		while (str[count] != '\0')
		{
			if (str[count - 1] <= 47 || str[count - 1] >= 123
				|| (str[count - 1] >= 58 && str[count - 1] <= 64)
				|| (str[count - 1] >= 91 && str[count - 1] <= 96))
			{
				ft_upper(str, count);
			}
			count++;
		}
	}
	return (str);
}
