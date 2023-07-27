/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:43:18 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/11 10:48:55 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	print(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int	n)
{
	if (n < 0)
	{
		print('N');
	}
	else if (n >= 0)
	{
		print('P');
	}
}
