/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 01:31:51 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/13 15:10:07 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dst;

	i = -1;
	dst = ft_strnew(ft_strlen(s));
	while (s[++i])
		dst[i] = f((char)s[i]);
	return (dst);
}
