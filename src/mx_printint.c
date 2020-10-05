#include "../inc/libmx.h"

void mx_printint(int n) {
    int size = 0;
    int buffer = n;

    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if(n < 0) {
        n *= -1;
        mx_printchar('-');
    }
    for (; buffer != 0; size++) {
        buffer /= 10;
    }
    int *arr = malloc(8 * size);
    for ( int i = 0; i < size; i++) {
        arr[i] = n % 10;
        n /= 10;
    }
    for (int i = size - 1; i >= 0; i--)
       mx_printchar(arr[i] + 48);
    mx_printchar('\n');
}
