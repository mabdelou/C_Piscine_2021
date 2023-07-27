/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:23:58 by mabdelou          #+#    #+#             */
/*   Updated: 2021/08/19 10:21:53 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	UP_first(char	*crr)
{
	if ((crr[0] >= 'a' && crr[0] <= 'z'))
		crr[0] = crr[0] - 32;
}

void	UP_words(char	*str,	int a)
{
	UP_first(str);
	if ((str[a] >= 0 && str[a] <= 47) || (str[a] >= 58 && str[a] <= 64))
	{
		if (str[a + 1] >= 97 && str[a + 1] <= 122)
			str[a + 1] = str[a + 1] - 32;
	}
	else if ((str[a] >= 91 && str[a] <= 96) || (str[a] >= 123 && str[a] <= 127))
	{
		if (str[a + 1] >= 97 && str[a + 1] <= 122 )
			str[a + 1] = str[a + 1] - 32;
	}
	else
	{
		if (str[a + 1] >= 'A' && str[a + 1] <= 'Z')
			str[a + 1] = str[a + 1] + 32;
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		UP_words(str, a);
		a++;
	}
	return (str);
}
