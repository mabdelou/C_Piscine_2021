/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:58:44 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/23 16:29:23 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char	*str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == 32 || (str[a] > 8 && str[a] < 14 ))
		a++;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b = b * -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = c * 10;
		c = c + (str[a] - '0');
		a++;
	}
	c = c * b;
	return (c);
}
