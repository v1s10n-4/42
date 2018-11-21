/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 02:49:33 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/16 00:18:29 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_word(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	while (haystack[i] && needle[i] && haystack[i] == needle[i] && i < len)
		i++;
	return (needle[i] == 0 && haystack[i - 1] == needle[i - 1]);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = -1;
	while (haystack[++i] && i < len)
		if (haystack[i] == needle[0] && is_word(&haystack[i], needle, len - i))
			return ((char *)&haystack[i]);
	return (!needle || needle[0] == 0) ? (char *)&haystack[0] : NULL;
}
