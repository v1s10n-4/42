/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 19:56:36 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/08 19:56:45 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *s1)
{
	int fesse;

	fesse = 0;
	while (s1[fesse] != '\0')
	{
		fesse++;
	}
	return (fesse);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		res;
	int		len1;
	int		len2;

	i = 0;
	res = 128;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while ((s1[i] != '\0' || s2[i] != '\0') && res == 128)
	{
		if (s1[i] != s2[i])
		{
			res = (len1 < len2) ? s1[i] - s2[i] : s2[i] - s1[i];
		}
		i++;
	}
	res = (res == 128) ? 0 : res;
	res = (len1 >= len2) ? -res : res;
	return (res);
}
