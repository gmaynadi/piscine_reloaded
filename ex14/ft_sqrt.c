/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaynadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:07:50 by gmaynadi          #+#    #+#             */
/*   Updated: 2018/11/10 18:14:01 by gmaynadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (i * i < nb + 1)
		{
			if (i * i == nb)
				return (i);
			i += 1;
		}
		if (i * i == nb)
			return (i);
	}
	return (0);
}
