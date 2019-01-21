/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppolozhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 18:09:26 by ppolozhe          #+#    #+#             */
/*   Updated: 2018/11/01 15:25:01 by ppolozhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int zm;

	zm = 1;
	if (nb == 0)
		return (0);
	while (zm * zm < nb)
		zm++;
	if ((zm * zm) == nb)
		return (zm);
	else
		return (0);
}
