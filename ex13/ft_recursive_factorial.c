/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaynadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:04:59 by gmaynadi          #+#    #+#             */
/*   Updated: 2018/11/10 16:07:06 by gmaynadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	else if (nb == 0)
		return 1;
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
