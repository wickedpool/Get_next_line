/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 14:54:35 by thgiraud          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/01/30 09:58:40 by thgiraud         ###   ########.fr       */
=======
/*   Updated: 2017/01/06 14:42:29 by thgiraud         ###   ########.fr       */
>>>>>>> f78ad217263e3f7f42cc08df4cbdd6a1bf0a2662
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/includes/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# define BUFF_SIZE 32
# define ENDL '\n'
# define END '\0'

int		get_next_line(const int fd, char **line);

#endif
