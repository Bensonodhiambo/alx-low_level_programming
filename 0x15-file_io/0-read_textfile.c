#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    if (filename == NULL)
        return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
        return 0;

    char *buffer = (char *) malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
        return 0;

    ssize_t bytes_read = fread(buffer, sizeof(char), letters, fp);
    if (bytes_read == -1)
        return 0;

    buffer[bytes_read] = '\0';

    ssize_t bytes_written = printf("%s", buffer);
    if (bytes_written == -1 || bytes_written != bytes_read)
        return 0;

    fclose(fp);
    free(buffer);

    return bytes_read;

