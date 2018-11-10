/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:25:33 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/19 21:25:33 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str, const char *src, int nb)
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
