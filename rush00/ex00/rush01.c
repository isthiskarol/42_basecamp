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
			if ((c == 1 && l == 1) || (c == x && l == y && y != 1 && x != 1))
				ft_putchar('/');
			else if ((c == 1 && l == y) || (c == x && l == 1))
				ft_putchar('\\');
			else if ((c > 1 && c < x) && (l == 1 || l == y))
				ft_putchar('*');
			else if ((c == 1 || c == x) && (l > 1 && l < y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
