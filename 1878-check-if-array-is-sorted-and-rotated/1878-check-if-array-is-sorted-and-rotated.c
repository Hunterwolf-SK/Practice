bool check(int* nums, int numsSize) 
{
    int count=0;
    if(nums[0] < nums[numsSize-1])
    {
        count++;
    }
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]>nums[i+1])
        {
            count++;
        }
         if(count>1)
        {
            return false; 
        }
    }
            return true;
}

