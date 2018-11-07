/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodaniel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:31:49 by rodaniel          #+#    #+#             */
/*   Updated: 2018/11/06 22:04:22 by rodaniel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_display_file(char *filename)
{
	int		fd;
	char	str;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (read(fd, &str, 1))
		write(1, &str, 1);
	close(fd);
}

int		main(int argc, char *argv[])
{
	if (argc != 2)
	{
		if (argc < 2)
		{
			write(2, "File name missing.\n", 19);
		}
		else
		{
			write(2, "Too many arguments.\n", 20);
		}
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
