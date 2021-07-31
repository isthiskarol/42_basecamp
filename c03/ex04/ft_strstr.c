char	*ft_strstr(char *str, char *to_find)
{
	int	first;
	int	second;

	if (to_find[0] == '\0')
		return (str);
	first = 0;
	while (str[first] != '\0')
	{
		second = 0;
		while (to_find[second] == str[first + second])
		{
			if (to_find[second + 1] == '\0')
			{
				return (str + first);
			}
			second++;
		}
		first++;
	}
	return (0);
}
