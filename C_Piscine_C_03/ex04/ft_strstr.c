/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:50:40 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/22 12:04:30 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*no_more_newline(char	*str, char	*to_find, int	a, int	b)
{
	int	c;

	while (str[a] != '\0')
	{
		if (str[a] == to_find[b])
		{
			b = 0;
			c = a;
			if (to_find[b + 1] == '\0')
				return (&str[a]);
			while (str[c + 1] == to_find[b + 1])
			{
				b++;
				c++;
				if (to_find[b + 1] == '\0')
					return (&str[a]);
			}
		}
		a++;
	}
	return (0);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	int		a;
	int		b;
	char	*d;

	a = 0;
	b = 0;
	if (to_find[a] == '\0')
		return (str);
	d = no_more_newline(str, to_find, a, b);
	return (&d[0]);
}
