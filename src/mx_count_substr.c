#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub){
    int i = 0;
    const char *buf = str;

    if (str == NULL || sub == NULL) {
        return -1;
    }
    if (mx_strlen(str) == 0 || mx_strlen(sub) == 0) {
        return 0;
    }
    for (; (buf = mx_strstr(buf, sub)) != 0; i++) {
        buf++;
    }
    return i;
}
