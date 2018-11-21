/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:25:20 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/19 21:25:20 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str, const char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (src[j])
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}
