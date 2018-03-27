/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitroi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 20:05:36 by smitroi           #+#    #+#             */
/*   Updated: 2017/12/18 18:49:24 by smitroi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	c2;
	size_t			i;

	i = 0;
	c2 = (unsigned char)c;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		if (s2[i] == c2)
		{
			return (((void *)s2) + i);
		}
		i++;
	}
	return (NULL);
}
