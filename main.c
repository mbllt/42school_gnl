#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"
// #include "get_next_line.c"
// #include "get_next_line_utils.c"

int	main()
{
	int		fd;
	int		size = 1;
	char	*line = NULL;

	line = NULL;
 	fd = open("texte.txt", O_RDONLY);
		while (size > 0)
		{
			if (line)
				free(line);
			size = get_next_line(fd, &line);
			printf("return de gnl = %d\n", size);
			printf("ligne de gnl = %s\n", line);
		}
		if (line)
			free(line);
		size = get_next_line(fd, &line);
		printf("return de gnl : %d\n", size);
		printf("ligne de gnl : %s\n", line);
		if (line)
			free(line);
		close(fd);
}

// int  main(void)
// {
//  size_t  fd;
//  char    *line = NULL;
//  int     i = 0;
//  fd = open("texte.txt", O_RDONLY);
//  int     gnl;
//  gnl = get_next_line(fd, &line);
//  while (i++ < 15)
//  {
//     printf("GNL : %d\n", gnl);
//     printf("line : %s\n", line);
//      if (line)
//          free(line);
//      gnl = get_next_line(fd, &line);
//  }
// //printf("GNL : %d\n", gnl);
// //printf("line : %s\n", line);
//  return (0);
// }

// int main (int argc, char **argv)
// {
//     char *line;
//     int fd;
//     int nb;

//     (void)argc;
//     (void)argv;

// 	setbuf(stdout, NULL);
//     fd = open("texte.txt", O_RDONLY);

//     nb = get_next_line(fd, &line);
//     printf("%s\n", line);
//     printf("%d\n", nb);

//     nb = get_next_line(fd, &line);
//     printf("%s\n", line);
//     printf("%d\n", nb);

//     nb = get_next_line(fd, &line);
//     printf("%s\n", line);
//     printf("%d\n", nb);

// 	    nb = get_next_line(fd, &line);
//     printf("%s\n", line);
//     printf("%d\n", nb);

// 	    nb = get_next_line(fd, &line);
//     printf("%s\n", line);
//     printf("%d\n", nb);

// 	    nb = get_next_line(fd, &line);
//     printf("%s\n", line);
//     printf("%d\n", nb);
// }
