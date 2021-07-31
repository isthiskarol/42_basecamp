#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	alph;

	alph = 122;
	while (alph >= 97)
	{
		write(1, &alph, 1);
		alph--;
	}
}
