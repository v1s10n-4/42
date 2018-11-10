/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 03:24:05 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/19 00:34:24 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*dst;
	size_t		len;
	long int	tmp;

	len = 0;
	tmp = n;
	while ((tmp /= 10) != 0)
		len++;
	len += n < 0 ? 1 : 0;
	if (!(dst = ft_strnew(len)))
		return (NULL);
	tmp = n;
	if (n < 0)
		dst[0] = '-';
	dst[len + 1] = 0;
	while (tmp != 0)
	{
		dst[len] = (48 + (tmp >= 0 ? tmp % 10 : -tmp % 10));
		tmp /= 10;
		len--;
	}
	return ((n == 0) ? ft_strdup("0") : dst);
}
