/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguiar- <gaguiar-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:58:45 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/07/16 17:36:08 by gaguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

void	ft_display_file(char *file);

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}

void	ft_display_file(char *file)
{
	int		fd;
	ssize_t	bytes_read;
	char	buf[BUF_SIZE];

	fd = open(file, O_RDONLY);
	bytes_read = read(fd, buf, BUF_SIZE);
	if (fd == -1)
	{
		write(2, "Unable to open file\n", 20);
		return ;
	}
	while (bytes_read > 0)
	{
		if (write(1, buf, bytes_read) == -1)
		{
			write(2, "Unable to write.\n", 17);
			close(fd);
			return ;
		}
		bytes_read = read(fd, buf, BUF_SIZE);
	}
	if (bytes_read == -1)
		write(2, "Unable to read the file.\n", 25);
	close(fd);
}
