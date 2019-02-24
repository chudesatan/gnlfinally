/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 01:57:14 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/17 19:53:11 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t a;
	size_t b;

	a = ft_strlen(src);
	b = ft_strnlen((const char *)dst, size);
	if (b == size)
		return (size + a);
	if (a < size - b)
	{
		ft_memcpy(dst + b, src, a + 1);
	}
	else
	{
		ft_memcpy(dst + b, src, size - b - 1);
		dst[size - 1] = 0;
	}
	return (a + b);
}
