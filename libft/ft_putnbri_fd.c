/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbri_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 23:47:58 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/18 23:48:29 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbri_fd(int n, int fd)
{
	int		len;
	int		i;
	long	j;
	long	tmp;

	len = 0;
	i = -1;
	j = 1;
	tmp = n;
	if (n < 0 && (n = -n))
		ft_putchar_fd('-', fd);
	if (n == -2147483648LL || n == 0)
		return (ft_putstr_fd(n == 0 ? "0" : "2147483648", fd));
	while (tmp /= 10)
		len++;
	tmp = n;
	while (++i <= len)
	{
		while (j < tmp)
			j *= 10;
		j = j ? j /= 10 : 0;
		ft_putchar_fd('0' + (tmp / j), fd);
		tmp -= j * (tmp / j);
	}
}
