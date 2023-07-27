/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 13:17:05 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/15 15:26:17 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	a;
	int	c;
	int	j;

	a = 0;
	while (a < size - 1)
	{
		j = a + 1;
		while (j < size)
		{
			if (tab[a] > tab[j])
			{
				c = tab[a];
				tab[a] = tab[j];
				tab[j] = c;
			}
			j++;
		}
		a++;
	}
}
