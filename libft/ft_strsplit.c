/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 03:30:08 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/18 23:46:21 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countw(const char *str, char c)
{
	int		i;
	int		n;
	int		tmp;

	i = -1;
	n = 0;
	tmp = 0;
	while (str[++i])
		if (str[i] == c)
			tmp = 0;
		else if (tmp == 0 && str[i] != c)
			tmp = ++n;
	return (n);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dst;

	i = 0;
	k = 0;
	if (!s || !c || !(dst = (char**)malloc(sizeof(char*) * countw(s, c) + 1)))
		return (NULL);
	while (i < countw(s, c))
	{
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k + j] && s[k + j] != c)
			j++;
		if (!(dst[i] = (char *)malloc(j)))
			return (NULL);
		j = 0;
		while (s[k] && s[k] != c)
			dst[i][j++] = s[k++];
		dst[i++][j] = 0;
	}
	dst[i] = NULL;
	return (dst);
}
