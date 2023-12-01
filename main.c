#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	char	*line;
	int		fd, row;

	fd = open("test.txt", O_RDONLY);
	line = (char *)1;
	row = 1;
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("%d. line: %s", row, line);
		free(line);
		row++;
	}
	close(fd);
}