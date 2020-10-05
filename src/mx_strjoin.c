#include "../inc/libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {;
	if (s1 == NULL && s2 != NULL) {
		char *ss2 = mx_strdup(s2);
			return ss2;
	}
	if (s1 != NULL && s2 == NULL) {
		char *ss1 = mx_strdup(s1);
			return ss1;
	}
	if (s1 != NULL && s2 != NULL) {
		char *ss1 = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
		ss1 = mx_strcpy(ss1, s1);
		ss1 = mx_strcat(ss1, s2);
		return ss1;
	}
	return NULL;
}
