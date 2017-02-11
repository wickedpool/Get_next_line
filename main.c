/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 14:23:22 by thgiraud          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/02/10 16:07:40 by thgiraud         ###   ########.fr       */
=======
/*   Updated: 2017/02/10 14:36:50 by thgiraud         ###   ########.fr       */
>>>>>>> ce27ffa18e0979eae0a7ff0fb78c61b9624429e2
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc || argv)
		;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
		printf("%s\n", line);
	close(fd);
	return (0);
}
