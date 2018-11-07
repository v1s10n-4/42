/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:53:34 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/13 20:32:14 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_the_good_word(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (str[i] == to_find[i] && str[i] != 0 && to_find[i] != 0)
		i++;
	return (to_find[i] == 0 && str[i - 1] == to_find[i - 1]) ? 1 : 0;
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find[0] && is_the_good_word(&str[i], to_find) == 1)
			return (&str[i]);
		i++;
	}
	return (to_find[0] == 0) ? &str[0] : ((void*)0);
}
