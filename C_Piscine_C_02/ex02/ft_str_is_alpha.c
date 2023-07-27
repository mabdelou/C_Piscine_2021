/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 13:32:23 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/17 11:24:06 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	a;
	int	b;

	b = 1;
	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 65 || (str[a] > 90 && str[a] < 97) || str[a] > 122)
			b = 0;
		a++;
	}
	return (b);
}
