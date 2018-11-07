/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 08:04:09 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/09 08:04:23 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *str, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (src[j])
	{
		str[i] = src[j];
		i++;
		j++;
	}
	str[i] = 0;
	return (str);
}