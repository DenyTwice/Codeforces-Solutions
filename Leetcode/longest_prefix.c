#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 1) {
        return strs[0];
    }

    if (strlen(strs[0]) == 0) {
        return "";
    }

    int max_length = strlen(strs[0]);
    char* longest_prefix = (char* ) malloc(max_length + 1);

    if (strs[0][0] != strs[1][0]) {
        return "";
    }

    int i = 0;
    while (strs[0][i] == strs[1][i] && i < max_length) {
        longest_prefix[i] = strs[0][i];
        i++;
    }
    longest_prefix[i] = '\0';

    for (int j = 2; j < strsSize; j++) {
        while (strncmp(longest_prefix, strs[j], i+1)) {
            longest_prefix[i] = '\0';
            i--;
        }
    }

    return longest_prefix;
}
