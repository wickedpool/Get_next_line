/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:40:52 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/12 17:28:22 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	tmp1;
	char	*tmp2;

	i = 0;
	tmp1 = (char)c;
	tmp2 = (char *)s;
	while (tmp2[i] && tmp2 != NULL)
	{
		if (tmp2[i] == tmp1)
			return (tmp2 + i);
		i++;
	}
	if (tmp1 == '\0')
		return (tmp2 + i);
	return (NULL);
}
