#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: file name
 * @text_content: content to put in the file
 *
 * Return: 1 for success or -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
int id, f = 0, retval = 1;
if (!filename)
	return (-1);
id = open(filename, O_WRONLY | O_APPEND);
if (id == -1)
	return (-1);
if (!text_content)
{
	close(id);
	return (1);
}
while (text_content[f])
	f++;
	retval = write(id, text_content, f);
	close(id);
if (retval == -1)
	return (-1);
	return (1);
	}
