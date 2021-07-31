/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmelo-de <kmelo-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 00:22:49 by kmelo-de          #+#    #+#             */
/*   Updated: 2021/07/27 17:02:58 by kmelo-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	box;

	count = 0;
	while (count < size)
	{
		size--;
		box = tab[count];
		tab[count] = tab[size];
		tab[size] = box;
		count++;
	}
}
