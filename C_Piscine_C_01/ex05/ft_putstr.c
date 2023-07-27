/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 13:19:10 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/15 15:25:35 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	print_string(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		print_string(str[i]);
		i++;
	}
}
