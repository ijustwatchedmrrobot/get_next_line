#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
/*	
All lines
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

check for fd = 0, 1, 2...
study buffer, static variable and functions
*/

// prints i. row
int main()
{
	char	*line;
	int		fd, row;
	int 	i = 4;

	fd = open("test.txt", O_RDONLY);
	while (i--)
		line = get_next_line(fd);
	printf("%s", line);
	free(line);
}

