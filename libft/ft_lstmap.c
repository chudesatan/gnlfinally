/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 16:28:39 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/21 14:34:49 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*beg;
	t_list	*her;

	if (!(beg = f(lst)))
		return (NULL);
	her = beg;
	while (lst->next)
	{
		lst = lst->next;
		her->next = f(lst);
		if (!(her->next))
			return (NULL);
		her = her->next;
	}
	return (beg);
}
