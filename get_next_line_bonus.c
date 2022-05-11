/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:26:04 by dmendonc          #+#    #+#             */
/*   Updated: 2022/05/11 14:10:01 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE];
	char		*temporary;
	int			flag;
	int			size;

	size = 0;
	temporary = NULL;
	if (fd < 0 || fd >= FOPEN_MAX || BUFFER_SIZE < 1)
		return (temporary);
	while (1)
	{
		flag = 1;
		if (!buffer[fd][0])
			flag = read(fd, buffer[fd], BUFFER_SIZE);
		size += search_for_size(buffer[fd], 10);
		if (flag > 0)
			temporary = join_buffer(temporary, buffer[fd], size);
		if (flag <= 0 || search_for_bl(buffer[fd]) == 0)
			break ;
	}
	return (temporary);
}

/* int	main(void)
{
	int		fd;
	int		size;
	char	*s;
	int		i;

	s = NULL;
	fd = open("file.txt", O_RDONLY);
	if ((fd) == -1)
	{
		printf("file opening failed\n");
		exit(0);
	}
	else
	{			
		
		s = get_next_line(fd);
		printf("%s", s);
		if (s)
			free(s);
		s = get_next_line(fd);
		printf("%s", s);
		if (s)
			free(s);
		s = get_next_line(fd);
		printf("%s", s);
		if (s)
			free(s);
		
	}
	return (0);
}
 */
