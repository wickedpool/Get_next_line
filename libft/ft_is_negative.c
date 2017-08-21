/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:35:17 by thgiraud          #+#    #+#             */
/*   Updated: 2017/02/13 12:40:07 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('p');
	else
		ft_putchar('n');
	ft_putchar('\n');
}
