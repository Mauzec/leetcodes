/* https://leetcode.com/problems/two-sum/submissions/ */

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int ar[], int numsSize, int target, int *returnSize);

int main() {
    
}   

int *twoSum(int *ar, int n, int target, int *r) {    
    *r = 2;
    int *ret = (int *)malloc(*r * sizeof(int));
    for (ret[0] = 0; ret[0] < n; ret[0]++)
        for (ret[1] = ret[0] + 1; ret[1] < n; ret[1]++)
            if(ar[ret[0]] + ar[ret[1]] == target) {
                printf("%d %d\n", ret[0], ret[1]);
                return ret;
            }
    
    return ret;
}