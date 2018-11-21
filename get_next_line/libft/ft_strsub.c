/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 23:27:26 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/16 01:56:07 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	i = -1;
	if (!s || !*s || (dst = (void *)malloc(len + 1)) == NULL)
		return (NULL);
	while (++i < len)
		dst[i] = s[start + i];
	dst[i] = 0;
	return (dst);
}
