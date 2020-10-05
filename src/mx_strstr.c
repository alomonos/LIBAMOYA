#include "../inc/libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int j = 0;

    if (!needle)
        return (char *)haystack;
    while (*haystack) {
        if (*haystack == needle[j])
            j++;
        else
            j = 0;
        if (j == mx_strlen(needle)) {
            haystack -= mx_strlen(needle) - 1;
            return (char *)haystack;
        }
        haystack++;
    }
    return NULL;
}
