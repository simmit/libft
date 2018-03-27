/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitroi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 16:14:27 by smitroi           #+#    #+#             */
/*   Updated: 2017/12/18 19:07:31 by smitroi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *join;

	join = NULL;
	if (s1 && s2)
	{
		join = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (join == NULL)
			return (NULL);
		ft_memcpy(join, s1, ft_strlen(s1));
		ft_strcat(join, s2);
	}
	else if (s1)
		return (ft_strdup(s1));
	else if (s2)
		return (ft_strdup(s2));
	return (join);
}
