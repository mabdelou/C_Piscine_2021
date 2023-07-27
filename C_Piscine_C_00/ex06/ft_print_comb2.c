/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:38:32 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/08 11:34:54 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	print_num(char i)
{
	write(1, &i, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_num((a / 10) + '0');
			print_num((a % 10) + '0');
			write(1, " ", 1);
			print_num((b / 10) + '0');
			print_num((b % 10) + '0');
			if (a < 98 && b <= 99)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
