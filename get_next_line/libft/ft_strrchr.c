/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 16:11:34 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/13 17:45:03 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		r;

	i = -1;
	r = -1;
	if (!c)
		return (&((char*)s)[ft_strlen(s)]);
	while (s[++i])
		if (s[i] == (unsigned char)c)
			r = i;
	return ((r != -1) ? &((char *)s)[r] : NULL);
}
