#include <unistd.h>

void	printing(void);
void	variables(void);

static char	g_f[2];
static char	g_s[2];

void	ft_print_comb2(void)
{
	variables();
	while (g_f[0] <= '9')
	{
		while (g_f[1] <= '9')
		{
			while (g_s[0] <= '9')
			{
				while (g_s[1] <= '9')
				{
					printing();
					g_s[1]++; // 00 01 → 00 09
				}
				g_s[0]++; // 00 09 → 00 10
				g_s[1] = '0';
			}
			g_f[1]++; // 00 99 → 01 02 
			g_s[0] = g_f[0];
			g_s[1] = g_f[1] + 1;
		}
		g_f[0]++; // 09 99 → 10 11
		g_f[1] = '0';
		g_s[0] = g_f[0];
		g_s[1] = '1';
	}
}

void	variables(void)
{
	g_f[0] = '0';
	g_f[1] = '0';
	g_s[0] = '0';
	g_s[1] = '1';
}

void	printing(void)
{
	write(1, &g_f, 2);
	write(1, " ", 1);
	write(1, &g_s, 2);
	if (g_f[0] != '9' || g_f[1] != '8')
		write(1, ", ", 2);
}
