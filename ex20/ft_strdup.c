/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:01:03 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/10/31 21:46:08 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		dir;
	char	*str;

	dir = 0;
	while (src[dir] != '\0')
		dir++;
	str = (char*)malloc(dir + 1);
	i = dir;
	dir = 0;
	while (dir < i)
	{
		str[dir] = src[dir];
		dir++;
	}
	str[dir] = '\0';
	return (str);
}
