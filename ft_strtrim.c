/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitroi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 20:12:02 by smitroi           #+#    #+#             */
/*   Updated: 2017/12/16 18:11:42 by smitroi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	ft_end(const char *s)
{
	int end;

	end = 0;
	while (s[end])
		end++;
	end--;
	while ((s[end] == ' ') || (s[end] == '\n') || (s[end] == '\t'))
		end--;
	return (end);
}

static inline int	ft_start(const char *s)
{
	int	start;

	start = 0;
	while ((s[start] == ' ') || (s[start] == '\n') || (s[start] == '\t'))
		start++;
	return (start);
}

char				*ft_strtrim(const char *s)
{
	char	*dest;
	int		st_index;
	int		end_index;

	if (!s)
		return (NULL);
	st_index = ft_start(s);
	end_index = ft_end(s);
	if (!s[st_index])
		return (ft_strnew(0));
	dest = ft_strnew(end_index - st_index + 1);
	if (!dest)
		return (NULL);
	dest = ft_strsub(s, st_index, (end_index - st_index + 1));
	return (dest);
}
