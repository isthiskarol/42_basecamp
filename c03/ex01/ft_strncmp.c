int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				dif;

	dif = 0;
	count = 0;
	while ((s1[count] != '\0') && (s2[count] != '\0') && (count < n) && !dif)
	{
		dif = (unsigned char)s1[count] - (unsigned char)s2[count];
		count++;
	}
	if ((s1[count] == '\0' || s2[count] == '\0') && (count < n) && (dif == 0))
	{
		dif = (unsigned char)s1[count] - (unsigned char)s2[count];
	}
	return (dif);
}
