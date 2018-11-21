/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:36:03 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/19 23:00:01 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	size_t src_len;
	size_t len;

	if (!src)
	{
		if (dst != 0 && 0 < size)
			dst = 0;
		return (0);
	}
	src_len = ft_strlen(src);
	len = src_len;
	if (!dst || !size)
		return (src_len);
	if ((size - 1) < len)
		len = (size - 1);
	ft_memcpy(dst, src, len);
	dst[len] = 0;
	return (src_len);
}
