#include <stdio.h>
#include <stdlib.h>

int notIn(int , int*, int);
int removeDuplicates(int*, int);

int main() 
{
    int nums[] = {1, 1, 2};
    int numsSize = 3;

    int k = removeDuplicates(nums, numsSize);

    return 0;
}

// Solution Begins Here
int removeDuplicates(int* nums, int numsSize) 
{
    int num_distinct;
    int* distinct_elements = (int *) calloc(numsSize, sizeof(int));
    int idx_distinct_elements = 0;
    int zero_flag = 1;

    for (int i = 0; i < numsSize; i++) {
        if (notIn(nums[i], distinct_elements, numsSize)) {
            distinct_elements[idx_distinct_elements] = nums[i];
            idx_distinct_elements++;
        }

        if (zero_flag && nums[i] == 0) {
            idx_distinct_elements++;
            zero_flag = !zero_flag;
        }
    }

    for (int i = 0; i < idx_distinct_elements; i++) {
        nums[i] = distinct_elements[i];
    }

    num_distinct = idx_distinct_elements;
    return num_distinct;
}

int notIn(int element, int* arr, int arrSize) 
{
    for (int i = 0; i < arrSize; i++) {
        if (arr[i] == element) {
            return 0;
        }
    }

    return 1;
}
