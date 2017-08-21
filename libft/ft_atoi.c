/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:03:43 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/13 12:39:00 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int			ft_atoi(const char *nprt)
{
	long	res;
	int		i;
	int		neg;

	i = 0;
	neg = 1;
	res = 0;
	while ((nprt[i] == '\n' || nprt[i] == '\t' || nprt[i] == '\f' ||
			nprt[i] == '\r' || nprt[i] == ' ' || nprt[i] == '\v') && nprt[i])
		i++;
	if (nprt[i] == 43 || nprt[i] == 45)
	{
		if (nprt[i] == 45)
			neg = -1;
		i++;
	}
	while (nprt[i] >= 48 && nprt[i] <= 57 && nprt[i])
	{
		res = res * 10 + nprt[i] - 48;
		i++;
	}
	return ((int)res * neg);
}
