/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 00:07:22 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/21 10:10:32 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *ptr;

	if (!len)
		return (dst);
	ptr = dst;
	while (len--)
		if (*src)
			*dst++ = *src++;
		else
			*dst++ = 0;
	return (ptr);
}
