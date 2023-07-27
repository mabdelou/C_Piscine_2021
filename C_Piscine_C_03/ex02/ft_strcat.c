/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:50:05 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/21 15:01:27 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	size_dest(char	*ssr)
{
	int	a;

	a = 0;
	while (ssr[a])
	{
		a++;
	}
	return (a);
}

int	size_dest1(char	*ssd)
{
	int	a;

	a = 0;
	while (ssd[a])
	{
		a++;
	}
	return (a);
}

char	*ft_strcat(char	*dest,	char	*src)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = size_dest(dest);
	c = size_dest1(src) + b;
	d = 0;
	while (a <= b + 1)
	{
		while (a >= b && a <= c)
		{
			dest[a] = src[d];
			a++;
			d++;
		}
		a++;
	}
	return (dest);
}
