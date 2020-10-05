#include "../inc/libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    int i;

    if (arr != NULL && delim != NULL) {
        for (i = 0; arr[i] != NULL; i++) {
            mx_printstr(arr[i]);
            if (arr[i + 1] == NULL)
                mx_printchar('\n');
            else
                mx_printstr(delim);
        }
    }
}
