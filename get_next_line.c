/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 08:42:48 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/01 14:38:38 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int			read_line(int fd, char **buff)
{
	char	*tab;
	int		ret;

	ret = 1;
	while (!ft_strchr(*buff, ENDL))
	{
		ret = read(fd, tab, BUFF_SIZE);
		tab[ret] = END;
		*buff = ft_strjoin(*buff, tab);
	}
	return (ret);
}

static int	ft_verif(char **buff, char **tab, char **line)
{
	
}

int			get_next_line(int const fd, char **line)
{
	static char *buff;
	char		*tmp;
	int			result;
	int			ret;

	tmp = ft_strnew(BUFF_SIZE);
	if (BUFF_SIZE <= 0 || fd < 0 || (ret = read(fd, tmp, 0)) < 0)
		return (-1);
	while ((ret = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		result = ft_verif(&buff[fd], &tab, line);
		free(tmp);
	}
	else if (ret == 0) // LET'S READ
		ret = read_line(fd, &buff); //HEADING TO READLINE
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
