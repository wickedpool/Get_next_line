/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:28:17 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/20 20:02:55 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *small)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(small);
	if (!(*small))
		return ((char *)big);
	while (big[i])
	{
		while (small[j] == big[i + j])
		{
			if (j == len - 1)
				return ((char *)big + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
