/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:50:15 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/22 12:03:43 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
