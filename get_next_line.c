/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 08:42:48 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/09 11:17:54 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	endline(char *buff)
{
	int		count;

	count = 0;
	printf("---------------------------ENTRY-ENDLINE\n");
	while (buff[count] != ENDL && buff[count])
	{
		count++;
		printf("COUNT = %d\n", count);
	}
	printf("BUFF dans ENDLINE = %s\n", buff);
	if (buff[count] == ENDL)
	{
		buff[count] = END;
		printf("BUFF dans if ENDLINE = %s\n", buff);
		return (count);
	}
	else
		return (-1);
}

static char	*join(char *buff, char *tab)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	printf("---------------------------ENTRY-JOIN\n");
	if (buff)
		i = ft_strlen(buff);
	printf("I dans join = %zu\n", i);
	if (tab)
		j = ft_strlen(tab);
	printf("J dans join = %zu\n", j);
	ptr = (char *)malloc(sizeof(*ptr) * (i + j + 1));
	ft_memcpy(ptr, buff, i);
		printf("PTR apres 1st memcpy = %s\n", ptr);
		printf("BUFF apres 1st memcpy = %s\n", buff);
	ft_memcpy(ptr + i, tab, j);
		printf("PTR apres 2nd memcpy = %s\n", ptr);
	ptr[i + j] = '\0';
	free(buff);
	ft_bzero(tab, BUFF_SIZE + 1);
	return (ptr);
}

static int	verif(char **buff, char **tab, char **line)
{
	char	*ptr;
	int		final;

	printf("---------------------------ENTRY-VERIF\n");
	*buff = join(*buff, *tab);
	printf("apel a join \n");
	final = endline(*buff);
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
	static char *buff[256];
	char		*tmp;
	int			result;
	int			ret;

	printf("-----------------------------ENTRY-GNL\n");
	tmp = ft_strnew(BUFF_SIZE);
	if (BUFF_SIZE <= 0 || fd < 0 || (ret = read(fd, tmp, 0)) < 0)
		return (-1);
	printf("-----------------------------HEADING TO FIRST WHILE\n");
	while ((ret = read(fd, tmp, BUFF_SIZE)) > 0)
	{
		printf("On est dans le while\n");
		printf("TMP = %s\n", tmp);
		printf("RET =%d\n", ret);
		result = verif(&buff[fd], &tmp, line);
		printf("RESULT =%d\n", result);
		free(tmp);
		if (result == 1)
			return (1);
		tmp = ft_strnew(BUFF_SIZE);
	}
	if ((result = verif(&buff[fd], &tmp, line))) // LET'S VERIF
		return (1); //HEADING TO RETURN
	else if (ft_strlen(buff[fd]) > 0)
	{
		*line = ft_strdup(buff[fd]);
		ft_strdel(&buff[fd]);
		return (1);
	}
	return (result);
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
