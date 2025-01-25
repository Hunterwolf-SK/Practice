/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize; 
    int* result = (int*)malloc(numsSize * sizeof(int)); 

    for (int i = 0; i < numsSize; i++) {
        result[i] = 1; 
    }

    int left = 1;
    for (int i = 0; i < numsSize; i++) {
        result[i] = result[i] * left; 
        left = left * nums[i]; 
    }
     int right = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        result[i] = result[i] * right; 
        right = right * nums[i]; 
    }

   

    return result;
}