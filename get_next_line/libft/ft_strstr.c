/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 02:39:10 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/16 02:07:10 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_word(const char *haystack, const char *needle)
{
	size_t i;

	i = 0;
	while (haystack[i] && needle[i] && haystack[i] == needle[i])
		i++;
	return (needle[i] == 0 && haystack[i - 1] == needle[i - 1]);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	i = -1;
	while (haystack[++i])
		if (haystack[i] == needle[0] && is_word(&haystack[i], needle))
			return ((char *)&haystack[i]);
	return (needle[0] == 0) ? (char *)&haystack[0] : NULL;
}
