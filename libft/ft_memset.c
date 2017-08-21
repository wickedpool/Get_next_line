/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 18:28:59 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/13 12:48:25 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp1;
	unsigned char	tmp2;

	i = 0;
	tmp1 = (unsigned char *)b;
	tmp2 = (unsigned char)c;
	while (i < len)
	{
		tmp1[i] = tmp2;
		i++;
	}
	return (tmp1);
}
