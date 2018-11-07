/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:08:32 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/17 22:09:40 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		sum;
	int		i;

	if (min >= max)
		return (NULL);
	else
	{
		sum = max - min;
		i = 0;
		if ((arr = (int*)malloc(sum * sizeof(int))) == NULL)
			return (NULL);
		while (i < sum)
		{
			arr[i] = min;
			min++;
			i++;
		}
	}
	return (arr);
}
