void moveZeroes(int* nums, int numsSize) {
    int i=0;
    int j=0;
    while(j<numsSize)
    {
        if(nums[j]!=0)
        {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        }
        j++;
    }
}