/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaynadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 17:19:45 by gmaynadi          #+#    #+#             */
/*   Updated: 2018/11/10 18:20:43 by gmaynadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_pustr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	char	*swap;
	int		i;
	int		error;

	error = 1;
	while (error)
	{
		error = 0;
		i = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				error = 1;
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
			}
		}
	}
	while (++error < argc)
	{
		ft_pustr(argv[error]);
		ft_putchar('\n');
	}
}
