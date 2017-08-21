/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:49:05 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/13 14:28:42 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp1;
	char	tmp2;

	i = ft_strlen(s) - 1;
	tmp1 = (char *)s;
	tmp2 = (char)c;
	while (tmp1[i])
	{
		if (tmp1[i] == tmp2)
			return (tmp1 + i);
		i--;
	}
	if (tmp2 == '\0')
		return (tmp1 + ft_strlen(s));
	else
		return (NULL);
}
