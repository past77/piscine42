/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:28:33 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/10/31 22:00:57 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_puter(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[++i])
		ft_putchar(str[i]);
	return (0);
}

int		main(int arc, char **arv)
{
	int fil_d;
	int *buf;

	if (arc > 2)
		return (ft_puter(" Too many arguments.\n"));
	else if (arc == 1)
		return (ft_puter(" File name missing.\n"));
	fil_d = open(arv[1], O_RDONLY);
	while (read(fil_d, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fil_d);
	return (0);
}
