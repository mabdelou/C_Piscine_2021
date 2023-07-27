/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 11:05:39 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/23 14:14:40 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char	c)
{
	write(1, &c, 1);
}

int	check_base(char	*base)
{
	int	a;
	int	c;

	a = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[a] != '\0')
	{
		if (base[a] == '+' || base [a] == '-' || base[a] == ' ')
			return (1);
		c = 0;
		while (base [c] != '\0')
		{
			if (a != c)
			{
				if (base[a] == base[c])
					return (1);
			}
			c++;
		}
		a++;
	}
	return (0);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int	a;
	int	c;
	int	i;

	a = check_base(base);
	i = 0;
	if (a == 0)
	{
		if (nbr < 0)
		{
			print('-');
			nbr = nbr * -1;
		}
		c = nbr;
		while (base[i])
			i++;
		if (c < i)
			print(base[c]);
		else
		{
			ft_putnbr_base(c / i, base);
			print(base[c % i]);
		}
	}
}
