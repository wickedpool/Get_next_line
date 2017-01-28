/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 19:38:02 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/10 10:35:16 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	tmp;
	unsigned char	*tmp2;

	i = 0;
	tmp = (unsigned char)c;
	tmp2 = (unsigned char *)s;
	while (i < n)
	{
		if (tmp2[i] == tmp)
			return (tmp2 + i);
		i++;
	}
	return (0);
}
