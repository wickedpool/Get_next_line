/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 17:21:35 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/14 13:55:03 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dst;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!(s))
		return (NULL);
	if (!(dst = ft_strnew(ft_strlen(str))))
		return (NULL);
	while (str[i])
	{
		dst[i] = (*f)(str[i]);
		i++;
	}
	return (dst);
}
