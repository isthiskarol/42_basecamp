#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alph;

	alph = 97;
	while (alph <= 122)
	{
		write(1, &alph, 1);
		alph++;
	}
}
