#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int		fd, num, i;
	char	*str;

	fd = open("test.txt", O_RDONLY);
	num = 3;
	i = 0;
	while (num--)
	{
	str = get_next_line(fd);
	free(str);
	i++;
	}
	printf("%d. line: %s", i, str);
}