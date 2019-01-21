/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:35:44 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/10/30 16:58:23 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *space;

	if (min >= max)
		return (NULL);
	else
		space = (int*)malloc(sizeof(*space) * (max - min));
	i = 0;
	while (min < max)
	{
		space[i] = min;
		i++;
		min++;
	}
	return (space);
}
