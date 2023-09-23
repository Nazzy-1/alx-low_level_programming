#ifndef ELF_HEADER_H
#define ELF_HEADER_H

void print_addr(char *ptr);
void print_type(char *ptr);
void print_osabi(char *ptr);
void print_version(char *ptr);
void print_data(char *ptr);
void print_magic(char *ptr);
void check_sys(char *ptr);
int check_elf(char *ptr);

#endif
