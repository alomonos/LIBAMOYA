#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    int i;
    char **ar = *arr;

    for (i = 0; ar[i] != NULL; i++)
        mx_strdel(&ar[i]);
    free(*arr);
    (*arr) = NULL;
}
