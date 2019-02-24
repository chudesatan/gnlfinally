/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 16:26:57 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/21 14:54:52 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*inside;
	size_t	s;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content == NULL))
	{
		inside = ft_memalloc(content_size);
		s = content_size;
		ft_memcpy(inside, content, content_size);
		new->content = inside;
		new->content_size = s;
	}
	else
	{
		new->content = NULL;
		new->content_size = 0;
	}
	new->next = NULL;
	return (new);
}
