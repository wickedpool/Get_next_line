/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 08:42:48 by thgiraud          #+#    #+#             */
/*   Updated: 2017/01/31 18:18:05 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int			read_line(int fd, char **buff)
{
	char	*tab;
	int		ret;

	printf("WELCOME READ LINE\n");
	ret = 1;
	while (!ft_strchr(*buff, ENDL))
	{
		printf("On rentre dans while READ\n");
		ret = read(fd, tab, BUFF_SIZE);
		tab[ret] = END;
		printf("TAB : %s\n", tab);
		*buff = ft_strjoin(*buff, tab);
		printf("BUFF APRES JOINS : %s\n", *buff);
	}
	return (ret);
}

int			get_next_line(int const fd, char **line)
{
	static char *buff;
	char		*tmp;
	int			ret;

	printf("WELCOME TO GNL\n");
	if (BUFF_SIZE <= 0 || fd <= 0)
		return (-1);
	printf("GESTION D'ERREUR\n");
	if (!buff) //MALLOC BUFF
	{
		printf("ON ALLOUE BUFF\n");
		buff = ft_memalloc(BUFF_SIZE);
		buff[0] = 0;
		printf("BUFF : %s\n", buff);
	}
	if (ret < 0)
		return (-1)
	else if (ret == 0) // LET'S READ
		ret = read_line(fd, &buff); //HEADING TO READLINE
	printf("ret : %d\n", ret);
	if (*line)
		ret = 1;
	return (ret);
}

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc || argv)
		;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
		printf("%s", line);
	close(fd);
	return (0);
}
