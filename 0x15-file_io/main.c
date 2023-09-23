#include "elf_header.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int open_elf_file(const char *filename);
Elf64_Ehdr *read_elf_header(int fd);
void close_elf_file(int fd);
void print_elf_header_info(Elf64_Ehdr *header);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

Elf64_Ehdr *header; /* Declare the header variable at the beginning*/
int fd = open_elf_file(argv[1]);
header = read_elf_header(fd); /* Assign the header here*/

check_elf(header->e_ident);
printf("ELF Header:\n");
print_elf_header_info(header);

free(header);
close_elf_file(fd);
return (0);
}

/**
 * open_elf_file - Opens an ELF file for reading.
 * @filename: The name of the ELF file to open.
 *
 * Return: The file descriptor of the opened file.
 */
int open_elf_file(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
exit(98);
}
return (fd);
}

Elf64_Ehdr *read_elf_header(int fd)
{
Elf64_Ehdr *header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close(fd);
dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
exit(98);
}

ssize_t bytes_read = read(fd, header, sizeof(Elf64_Ehdr));
if (bytes_read == -1)
{
free(header);
close(fd);
dprintf(STDERR_FILENO, "Error: Unable to read ELF header\n");
exit(98);
}

return (header);
}

/**
 * close_elf_file - Closes an open ELF file.
 * @fd: The file descriptor of the open file to close.
 */
void close_elf_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
exit(98);
}
}

/**
 * print_elf_header_info - Prints information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
    /* Add more print functions as needed*/
}

