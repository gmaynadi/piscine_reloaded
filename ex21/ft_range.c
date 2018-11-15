/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaynadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 14:52:48 by gmaynadi          #+#    #+#             */
/*   Updated: 2018/11/15 15:59:09 by gmaynadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (tab);
	else
	{
		if (!(tab = (int*)malloc(sizeof(int) * (max - min + 1))))
			return (0);
		i = 0;
		while (min < max)
			tab[i++] = min++;
		tab[i] = '\0';
		return (tab);
	}
}
