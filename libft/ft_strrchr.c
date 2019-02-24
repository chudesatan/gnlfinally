/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 03:20:55 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/17 18:57:11 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int l;

	l = ft_strlen(s);
	if (s[0] == '\0' && (c != '\0'))
		return (NULL);
	if ((char)c == '\0')
		return ((char *)s + l);
	while (s[--l] != (char)c)
		if (!(l))
			return (NULL);
	return ((char *)s + l);
}
