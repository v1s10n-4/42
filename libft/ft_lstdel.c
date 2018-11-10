/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 20:48:26 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/15 22:34:08 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*l;

	while (*alst && del)
	{
		l = (*alst)->next;
		ft_lstdelone(&(*alst), del);
		*alst = l;
	}
	*alst = NULL;
}
