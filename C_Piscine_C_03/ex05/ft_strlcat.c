/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:50:51 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/22 12:10:30 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;
	unsigned int	d;

	a = 0;
	b = 0;
	d = 0;
	while (dest[b])
		b++;
	c = b;
	while (src[a])
		a++;
	if (c >= size)
		return (a + size);
	while (src[d] && b + 1 < size)
	{
		dest[b] = src[d];
		b++;
		d++;
	}
	dest[b] = '\0';
	return (a + c);
}
