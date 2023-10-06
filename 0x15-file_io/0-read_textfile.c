#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file
 * @filename: file name
 * @letters: letters
 *
 * Return:number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t u;
	ssize_t w;
	ssize_t t;

	u = open(filename, O_RDONLY);
	if (u == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(u, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(u);
	return (w);
}
