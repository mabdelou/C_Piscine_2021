/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 07:28:13 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/08 07:39:34 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_me(char i)
{
	write (1, &i, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_print_me('-');
		ft_print_me('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_print_me('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_print_me(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_print_me(nb % 10 + '0');
	}
}
