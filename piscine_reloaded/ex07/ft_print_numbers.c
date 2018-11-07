/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 15:49:02 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/04 14:49:02 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int fesse;

	fesse = 48;
	while (fesse <= 57)
	{
		ft_putchar(fesse);
		fesse++;
	}
	return ;
}
