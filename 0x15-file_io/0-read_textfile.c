#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *bufr;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (bufr == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, bufr, letters);
	w = write(STDOUT_FILENO, bufr, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(bufr);
		return (0);
	}

	free(bufr);
	close(o);

	return (w);
}


