/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 07:02:39 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/17 11:25:37 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	test(char	*stc)
{
	int	a;

	a = 0;
	while (stc[a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned	int	ft_strlcpy(char	*dest,	char	*src,	unsigned	int	size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (test(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (test(src));
}
