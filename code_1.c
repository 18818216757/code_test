#include<malloc.h>
int* twoSum(int* nums, int numsSize, int target) {
    int *number;
    number = (int *)malloc(8);
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                number[0] = i;
                number[1] = j;
                return number;
            }
        }
    }
    return NULL;
}



int 1;
