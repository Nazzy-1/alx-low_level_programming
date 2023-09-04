#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letter
 * Return: actual number of bytes read and printed
 *        0 when function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t file_descriptor;
ssize_t w;
ssize_t t;
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
t = read(file_descriptor, buffer, letters);
w = write(STDOUT_FILENO, buffer, t);
free(buffer);
close(file_descriptor);
return (w);
}
