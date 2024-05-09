#include <stdlib.h>

int isSelfDivide(int n);
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* arr = (int*)malloc((right - left) * sizeof(int));
    int index = 0;

    for (int i = left; i <= right; i++) {
        if (isSelfDivide(i)) {
            arr[index] = i;
            index++;
        }
    }

    int* ans = (int*)malloc(index * sizeof(int));
    for (int i = 0; i < index; i++) {
        ans[i] = arr[i];
    }

    *returnSize = index;

    return ans;
}

int isSelfDivide(int n) {
    int mut_n = n;
    int digit;

    while (mut_n > 0) {
        digit = mut_n % 10;
        if (digit == 0 || n % digit) {
            return 0;
        }
        mut_n = mut_n / 10;
    }

    return 1;
}
