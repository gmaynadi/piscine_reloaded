/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaynadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:30:20 by gmaynadi          #+#    #+#             */
/*   Updated: 2018/11/15 17:13:59 by gmaynadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUF 4096

void	ft_puterror(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(2, str, i);
}

int		main(int argc, char **argv)
{
	char	buffer[BUF + 1];
	int		buf;
	int		fd;

	if (argc == 1)
		ft_puterror("File name missing.\n");
	else if (argc > 2)
		ft_puterror("Too many arguments.\n");
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			ft_puterror("No such file.\n");
		while ((buf = read(fd, &buffer, BUF)) != 0)
		{
			buffer[buf] = '\0';
			write(1, &buffer, buf);
		}
		close(fd);
	}
	return (0);
}
