#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n_bytes;
	char buf[1024];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((n_bytes = read(fd, buf, 1024)) > 0 && letters > 0)
	{
		if (write(STDOUT_FILENO, buf, n_bytes) != n_bytes)
		{
			close(fd);
			return (0);
		}
		letters -= n_bytes;
	}

	close(fd);

	return (n_bytes == -1 ? 0 : n_bytes);
}
