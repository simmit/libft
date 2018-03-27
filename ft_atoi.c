/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smitroi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 22:48:48 by smitroi           #+#    #+#             */
/*   Updated: 2017/12/18 19:06:16 by smitroi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int numar;
	int semn;
	int	count;

	numar = 0;
	semn = 1;
	count = 0;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		semn = (*str == '-' ? -1 : 1);
		str++;
	}
	while (ft_isdigit(*str))
	{
		count++;
		if (count == 20 && semn < 0)
			return (0);
		if (count == 20 && semn > 0)
			return (-1);
		numar = numar * 10 + *str - '0';
		str++;
	}
	return (numar * semn);
}
