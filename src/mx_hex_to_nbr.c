#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long base = 1;
    unsigned long result = 0;

    for ( int i = mx_strlen(hex) - 1; i >= 0; i--) {
        if ( hex[i] >= '0' && hex[i] <= '9') {
            result += (hex[i] - 48) * base;
        }
        else if ( hex[i] >= 'A' && hex[i] <= 'F') {
            result += (hex[i] - 55) * base;
        }
        else if ( hex[i] >= 'a' && hex[i] <= 'f') {
            result += (hex[i] - 87) * base;
        }
        base *= 16;
    }
    return result;
}
