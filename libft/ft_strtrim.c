/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 00:23:59 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/14 18:31:15 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblank(int c)
{
	return (c == 32 || c == 9 || c == 10);
}

char			*ft_strtrim(char const *s)
{
	int			i;
	int			l;
	int			len;
	char		*dst;

	i = -1;
	l = 0;
	len = 0;
	while (ft_isblank(s[l]))
		l++;
	if (s[l] == '\0')
		return ("");
	while (s[l + len] != '\0')
		len++;
	while (!s[l + len] || ft_isblank(s[l + len]))
		len--;
	if ((dst = (void *)malloc(len + 1)) == NULL)
		return (NULL);
	while (++i <= len)
		((char *)dst)[i] = ((char *)s)[l + i];
	dst[len + 1] = 0;
	return (dst);
}
