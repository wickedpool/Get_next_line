/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:17:26 by thgiraud          #+#    #+#             */
/*   Updated: 2017/01/03 17:40:06 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			get_next_line(int const fd, char **line)
{
	static char		*tab = NULL;
	char			*tmp;
	char			*buff;
	int				ret;

	if (!tab || !line || BUFF_SIZE < 1 || fd < 0 || fd > 255)
		return (-1);
	if (!(buff = ft_strnew(BUFF_SIZE)))
		return (-1);
	if (tab == NULL)
		if (!(tab = ft_memalloc(BUFF_SIZE)))
			return (-1);
	tmp = ft_strncpy(ft_memalloc(BUFF_SIZE), tab, BUFF_SIZE);
	while (!(ft_strchr(tmp, ENDL)))
	{
		ret = read(fd, tmp, BUFF_SIZE);
		if (ret < 0)
			return (-1);
		else if (ret == 0)
		{
			if ((ft_strchr(tmp, END)) == tmp)
				return (0);
		}
		else if (ret > 0)
		{
			tmp[ret] = END;
			ft_strchr(tmp, ENDL);
			tab = ft_strjoin(tab, tmp);
		}
		tab[ft_strchr(tab, ENDL) - tab] = END;
		*line = ft_strdup(tab);
		ft_memmove(tab, ft_strchr(tab, ENDL) + 1, ft_strlen(ft_strchr(tab, ENDL)) + 1);
		return (1);
		free(tmp);
		free(tab);
	}
	return (-1);
}
