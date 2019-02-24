/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 23:48:52 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/17 18:08:02 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s2;
	int		count;
	int		i;

	count = 0;
	while (src[count])
		++count;
	if (!(s2 = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	i = 0;
	while (i < count)
	{
		s2[i] = src[i];
		++i;
	}
	s2[count] = '\0';
	return (s2);
}
