#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	while (l <= y && x > 0)
	{
		while (c <= x)
		{
			if ((l == 1) && (c == 1 || c == x))
				ft_putchar('A');
			else if ((l == y) && (c == 1 || c == x))
				ft_putchar('C');
			else if ((c > 1 && c < x) && (l == 1 || l == y))
				ft_putchar('B');
			else if ((c == 1 || c == x) && (l > 1 && l < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
