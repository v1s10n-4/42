/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 00:23:59 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/19 19:40:18 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblanknl(int c)
{
	return (c == 32 || c == 9 || c == 10);
}

char			*ft_strtrim(const char *s)
{
	int			i;
	int			l;
	int			len;
	char		*dst;

	i = -1;
	l = 0;
	len = 0;
	while (s && ft_isblanknl(s[l]))
		l++;
	if (!s || !*s || s[l] == '\0')
		return (ft_strdup(""));
	while (s[l + len] != '\0')
		len++;
	while (!s[l + len] || ft_isblanknl(s[l + len]))
		len--;
	if ((dst = (void *)malloc(len + 2)) == NULL)
		return (NULL);
	while (++i <= len)
		((char *)dst)[i] = ((char *)s)[l + i];
	dst[len + 1] = 0;
	return (dst);
}
