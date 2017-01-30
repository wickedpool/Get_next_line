/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 08:42:48 by thgiraud          #+#    #+#             */
/*   Updated: 2017/01/30 15:35:52 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			read_line(int fd, char **buff)
{
	char	tab[BUFF_SIZE + 1];
	int		ret;

	ret = 1;
	while (ft_strstr(*buff, ENDL) == NULL && ret != 0)
	{
		if (ret = read(fd, tab, BUFF_SIZE) == -1)
			return (-1);
		tab[ret] = END;
		*buff = ft_strjoin(*buff, tab);
		ft_memset(*buff, 0, ret);
	}
	return (ret);
}

int			get_next_line(int const fd, char **line)
{
	static char *buff;
	char		*tmp;
	int			ret;

	if (BUFF_SIZE <= 0 || fd <= 0)
		return (-1);
	if (!(buff))
		buff = ft_memalloc(BUFF_SIZE);
	ret = read_line(fd, &buff);

}
