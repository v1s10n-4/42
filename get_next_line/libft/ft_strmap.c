/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 01:31:51 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/16 00:34:42 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*dst;

	i = -1;
	if (!s || !*s || (dst = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	while (s[++i])
		dst[i] = f((char)s[i]);
	dst[i] = 0;
	return (dst);
}
