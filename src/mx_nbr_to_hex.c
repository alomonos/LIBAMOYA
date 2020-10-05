#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int size = 0;
    unsigned long buffer = nbr;
    int buff = 0;

    while ( buffer / 16 != 0) {
        size++;
        buffer /= 16;
    }
    char *arr = malloc((size + 1) * sizeof(char));
    for (int i = size; i >= 0; i--) {
        buff = nbr % 16;
        if (buff >= 0 && buff <= 9)
            arr[i] = buff + 48;
        else if (buff >= 10 && buff <= 15)
            arr[i] = buff + 87;
        nbr /= 16;
    }
    arr[size + 1] = '\0';
    return arr;
}
