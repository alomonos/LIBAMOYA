#include "../inc/libmx.h"

int mx_sqrt(int x) {
    double i;

    for(i = 1; i <= x / i; i++) {
        if(x == i / x)
            return i;
    }
    return 0;
}
