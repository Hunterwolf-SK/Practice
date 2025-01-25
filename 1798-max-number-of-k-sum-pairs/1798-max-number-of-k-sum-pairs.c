

int maxOperations(int* nums, int numsSize, int k)
{
int i=0;
int count=0;
int j=numsSize-1;
int compare(const void *a,const void *b)
{
return(*(int*)a - *(int *)b);
}
qsort(nums,numsSize,sizeof(int),compare);
for(i=0;i<j;)
{
     int sum=nums[i]+nums[j];
      if(sum==k)
      {
      count++;
      j--;
      i++;
      }
      else if(sum<k)
      {
        i++;
      }
      else
    {
        j--;
    }

      }
return count;
}