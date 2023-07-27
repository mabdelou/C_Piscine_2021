/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:59:18 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/19 11:14:42 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	print(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char	*str)
{
	int		i;
	char	*c;

	c = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= 126)
			print(str[i]);
		else
		{
			print('\\');
			print(c[(unsigned int)str[i] / 16]);
			print(c[(unsigned int)str[i] % 16]);
		}
		i++;
	}
}
