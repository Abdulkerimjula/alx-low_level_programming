#include "main.h"

/**
 * append_text_to_file - Append text
 * @filename: A file name
 * @text_content: ttext
 * Return: If fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int u, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	w = write(u, text_content, len);

	if (u == -1 || w == -1)
		return (-1);

	close(u);

	return (1);
}
