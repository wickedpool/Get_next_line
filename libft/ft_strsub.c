/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:51:53 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/13 14:35:05 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*str;

	i = 0;
	j = len;
	if (!(s))
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (i < j)
	{
		str[i] = s[(size_t)start];
		i++;
		start++;
	}
	return (str);
}
