/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 08:14:27 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/13 15:06:04 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (src[j] && j < nb)
		str[i++] = src[j++];
	str[i] = 0;
	return (str);
}
