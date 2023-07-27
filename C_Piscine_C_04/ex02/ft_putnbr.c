/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:55:41 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/23 14:14:00 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	print_num(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		print_num('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb < 10)
	{
		print_num(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		print_num(nb % 10 + '0');
	}
}
