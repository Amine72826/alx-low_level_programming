#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	if (!filename)
		return (-1);

	FILE *fp = fopen(filename, "w");

	if (fp == NULL)
		return (-1);

	if (text_content != NULL)
	{
		int num_written = fprintf(fp, "%s", text_content);

		if (num_written < 0)
			return (-1);
	}

	fclose(fp);

	return (1);
}
