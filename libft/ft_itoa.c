/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 03:24:05 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/14 19:54:13 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*dst;
	int			len;
	long int	tmp;

	len = 0;
	tmp = n;
	while ((tmp /= 10) != 0)
		len++;
	len += n < 0 ? 2 : 1;
	if (!(dst = ft_strnew(len)))
		return (NULL);
	tmp = n;
	if (n < 0)
		dst[0] = '-';
	printf("\nn = %d\ntmp:%ld\nlen:%d\ndst:%s\n", n, tmp, len, dst);
	while (tmp != 0)
	{
		dst[len] = (48 + (tmp >= 0 ? tmp % 10 : -tmp % 10));
		tmp /= 10;
		len--;
	}
//	dst[len + 1] = 0;
	return (dst);
}
