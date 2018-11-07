/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c		  	                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 03:26:20 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/11 09:21:03 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (str[i] < 32 || str[i] == 127)
			return (0);
	return (1);
}
