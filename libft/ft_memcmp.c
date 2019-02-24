/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 23:34:48 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/15 16:33:25 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;

	if (n)
	{
		a = (unsigned char *)s1;
		b = (unsigned char *)s2;
		while (n)
		{
			if (*a++ != *b++)
				return (*--a - *--b);
			n--;
		}
	}
	return (0);
}
