/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 22:25:26 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/12 21:32:11 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_min(int a, int b)
{
	if (b > a)
		return (a);
	return (b);
}

int					ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = ft_strlen(dest);
	j = 0;
	res = ft_min(ft_strlen(dest), size) + ft_strlen(src);
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (res);
}
