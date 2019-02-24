/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/23 03:46:52 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/21 11:06:21 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char*)hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == hay[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)hay + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
