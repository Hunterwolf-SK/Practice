/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) 
{
    int* arr = (int*)calloc(numsSize,sizeof(int)); 
    int count=0;
    int i;
    for (i = 0; i < numsSize - 1; i++) {
        if (nums[i] != 0) {
            if (nums[i] == nums[i + 1]) {
                arr[count] = nums[i] * 2;
                i++; 
            } else {
                arr[count] = nums[i];
            }
            count++;
        }
    }
    if (i < numsSize && nums[i] != 0) {
        arr[count] = nums[i];
        }

    *returnSize = numsSize;
    return arr;
}



    
