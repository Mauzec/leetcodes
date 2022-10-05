
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize);
char *CommonPrefixAlgo(char **strs, int low, int high);
char *CommongPrefixUtil(char *str1, char *str2);

char *longestCommonPrefix(char **strs, int size) {
    return CommonPrefixAlgo(strs, 0, size - 1);
}

char *CommonPrefixAlgo(char **strs, int low, int high) {
    if (low == high)
        return strs[low];

    int mid = low + (high - low) / 2;

    char *str1 = CommonPrefixAlgo(strs, low, mid);
    char *str2 = CommonPrefixAlgo(strs, mid + 1, high);

    return CommongPrefixUtil(str1, str2);
}

char *CommongPrefixUtil(char *str1, char *str2) {
    char *res = "";

    int n1 = strlen(str1);
    int n2 = strlen(str2);

    for (int i = 0, j = 0; i < n1 && j < n2; i++, j++) {
        if (str1[i] != str2[j])
            break;
        int nres = strlen(res);
        char *tmp = (char *)malloc(nres + 2);
        strcpy(tmp, res);
        tmp[nres + 2 - 2] = str1[i];
        tmp[nres + 2 - 1] = '\0';
        res = tmp;
    }
    return res;
}

int main() {
}