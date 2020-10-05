#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    char *str;
    char c;
    int size = 0;
    int newfd = 0;

    if (file == NULL)
        return NULL;
    newfd = open(file, O_RDONLY);
    while(read(newfd, &c, 1)) {
        size++;
    }
    close(newfd);
    newfd = open(file, O_RDONLY);
    str = mx_strnew(size);
    read(newfd, str, size);
    close(newfd);
    return str;
}
