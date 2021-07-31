unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	total;
	unsigned int	count;

	total = 0;
	while (src[total] != '\0')
	{
		total++;
	}
	if (size > 0)
	{
		count = 0;
		while (src[count] != '\0' && count < (size - 1))
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	return (total);
}
