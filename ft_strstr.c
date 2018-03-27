/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitroi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 18:24:51 by smitroi           #+#    #+#             */
/*   Updated: 2017/12/18 18:57:54 by smitroi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *x, const char *y)
{
	int i;
	int j;

	i = 0;
	if ((x[0] == '\0') && y[0] == '\0')
		return ((char *)x);
	if (x[0] != '\0' && y[0] == '\0')
		return ((char *)x);
	while (x[i] != '\0')
	{
		j = 0;
		while (y[j] == x[i + j])
		{
			if (y[j + 1] == '\0')
			{
				return ((char *)x + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
