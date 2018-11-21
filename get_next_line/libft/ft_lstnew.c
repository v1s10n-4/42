/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <rodaniel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 05:11:18 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/15 20:20:06 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*l;

	if (!(l = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(l->content = (void *)malloc(content_size)))
	{
		free(l);
		return (NULL);
	}
	l->content = content ? ft_memcpy(l->content, content, content_size) : NULL;
	l->content_size = content ? content_size : 0;
	l->next = NULL;
	return (l);
}
