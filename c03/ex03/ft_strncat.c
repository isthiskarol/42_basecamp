char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	first;
	unsigned int	second;

	first = 0;
	while (dest[first] != '\0')
	{
		first++;
	}
	second = 0;
	while (src[second] != '\0' && second < nb)
	{
		dest[first] = src[second];
		first++;
		second++;
	}
	dest[first] = '\0';
	return (dest);
}
