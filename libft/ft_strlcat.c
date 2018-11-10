/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 21:25:26 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/19 21:25:26 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_min(int a, int b)
{
	return ((b > a) ? a : b);
}

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int res;

	i = ft_strlen(dest);
	j = 0;
	res = ft_min(ft_strlen(dest), size) + ft_strlen(src);
	while (size && (i < size - 1 && src[j]))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (res);
}
