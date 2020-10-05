#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = 0;
    int right = size - 1;
    int mid;

    if (!s || !*arr)
        return -1;
    else
    *count = 0;
        while ( left <= right) {

        mid = (left + right) / 2;
        ++*count;
        if ( mx_strcmp(arr[mid], s) == 0)
            return mid;
        else if ( mx_strcmp(arr[mid], s) > 0)
            right = mid - 1;
        else
            left = mid + 1;
    }
    *count = 0;
    return -1;
}
