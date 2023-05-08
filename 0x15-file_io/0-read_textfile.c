#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to stdout.
 *
 * @filename: The name of the file to read.
 * @letters: The maximum number of bytes to read and print.
 *
 * Return: The actual number of bytes read and printed.
 *         0 if filename is NULL or the function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes_read, num_bytes_written;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	num_bytes_read = read(fd, buf, letters);
	if (num_bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	num_bytes_written = write(STDOUT_FILENO, buf, num_bytes_read);
	if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (num_bytes_written);
}
