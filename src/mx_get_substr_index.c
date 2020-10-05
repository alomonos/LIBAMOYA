#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    int i = 0;
    int j = 0;

    if (str == NULL || sub == NULL) {
        return -2;
    }
    while (*str) {
        if (j == mx_strlen(sub)) {
            i -= j;
            return i;
        }
        if (*str == sub[j])
            j++;
        else
            j = 0;
        str++;
        i++;
    }
    return -1;
}
