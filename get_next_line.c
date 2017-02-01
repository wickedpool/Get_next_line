/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 08:42:48 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/01 17:31:16 by thgiraud         ###   ########.fr       */
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

static int	endline(char *buff)
{
	int		count;

	count = 0;
	while (buff[count] != ENDL && buff[i])
		i++;
	if (buff[count] == ENDL)
	{
		buff[count] = END;
		return (count)
	}
	else
		return (-1);
}

static char	join(char *buff, char *tab)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = ft_strlen(buff);
	j = ft_strlen(tab);
	ptr = (char *)malloc(sizeof(*ptr) * (i + j + 1));
	ft_memcpy(ptr, buff, i);
	ft_memcpy(ptr + i, tab, s2);
	ptr[i + j] = '\0';
	free(buff);
	ft_bzero(s2, BUFF_ZIZE + 1);
	return (ptr);
}

static int	verif(char **buff, char **tab, char **line)
{
	char	*ptr;
	int		final;

	*buff = join(*buff, *tab);
	final = endline(*buff)
	if (final > -1)
	{
		*line = ft_strdup(*buff);
		ptr = *buff;
		*buff = ft_strdup(*buff + final + 1);
		free(ptr);
		return (1);
	}
	return (0);
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
		result = verif(&buff[fd], &tab, line);
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
