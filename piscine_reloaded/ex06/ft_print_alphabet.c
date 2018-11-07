/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnt_alphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 21:45:53 by rodaniel          #+#    #+#             */
/*   Updated: 2017/08/04 14:47:57 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int fesse;

	fesse = 97;
	while (fesse <= 122)
	{
		ft_putchar(fesse);
		fesse++;
	}
	return ;
}
