/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 01:25:37 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/10 01:26:00 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = 0;
		i++;
	}
	while (src[j])
		j++;
	return (j);
}
