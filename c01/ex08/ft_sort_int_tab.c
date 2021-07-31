/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmelo-de <kmelo-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 06:08:08 by kmelo-de          #+#    #+#             */
/*   Updated: 2021/07/27 13:34:29 by kmelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	position;
	int	count;
	int	box;

	position = 0;
	count = 0;
	while (position < size)
	{
		while (count < size)
		{
			if (tab[position] > tab[count])
			{
				box = tab[position];
				tab[position] = tab[count];
				tab[count] = box;
			}
			count++;
		}
		position++;
		count = position + 1;
	}
}
