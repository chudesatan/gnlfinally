/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorrupt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:08:10 by fcorrupt          #+#    #+#             */
/*   Updated: 2019/01/21 09:52:56 by fcorrupt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*buff;
	int		i;
	int		len;
	int		len_b;

	len_b = n;
	len = 1;
	i = (n < 0) ? 1 : 0;
	while ((len_b /= 10))
		len++;
	if (!(buff = ft_strnew(len + i)))
		return (NULL);
	if (i)
		buff[0] = '-';
	while (len--)
	{
		buff[len + i] = (i ? -(n % 10) : (n % 10)) + '0';
		n /= 10;
	}
	return (buff);
}
