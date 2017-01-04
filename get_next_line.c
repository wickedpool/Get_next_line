/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 14:17:26 by thgiraud          #+#    #+#             */
/*   Updated: 2017/01/04 13:29:10 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>

int			get_next_line(int const fd, char **line)
{
	static char		*tmp = NULL;
	char			*tab;
	char			*buff;
	int				ret;


	printf("--------Bienvenue dans gnl\n");
	if (tab == NULL)
	printf("--------Bienvenue\n");
		tab = ft_memalloc(BUFF_SIZE);
	printf("dans gnl\n");
	tmp = ft_strncpy(ft_memalloc(BUFF_SIZE), tab, BUFF_SIZE);
	buff = ft_strchr(tmp, ENDL);
	while (!(buff))
	{
		printf("----on est dans le while\n");
		ret = read(fd, tmp, BUFF_SIZE);
		if (ret < 0)
			return (-1);
		printf("TMP == %s\n", tmp);
		 if (ret == 0)
		{
			if ((buff = ft_strchr(tmp, END)) == tmp)
				return (0);
		}
		else
		{
			tmp[ret] = END;
			printf("TMP si ret > 0 et tmp[ret] = END  ==%s\n", tmp);
			buff = ft_strchr(tmp, ENDL);
			printf("BUFF ==%s\n", buff);
			printf("TMP si ret > 0 apres strchr ==%s\n", tmp);
			tab = ft_strjoin(tmp, tab);
			printf("TMP ==%s\n", tmp);
			printf("TAB ==%s\n", tmp);
		}
		printf("on sort du while");
		tab[ft_strchr(tab, ENDL) - tab] = END;
		printf("TAB ==%s\n", tmp);
		*line = ft_strdup(tab);
		printf("LINE ==%s\n", *line);
		ft_memmove(tab, ft_strchr(tab, ENDL) + 1, ft_strlen(ft_strchr(tab, ENDL)) + 1);
		printf("TAB FIN ==%s\n", tmp);
		return (1);
		free(tmp);
		free(tab);
	}
	return (-1);
}
