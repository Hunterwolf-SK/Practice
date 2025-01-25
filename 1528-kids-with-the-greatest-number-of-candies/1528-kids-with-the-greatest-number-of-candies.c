/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
   *returnSize=candiesSize;
    int max=0;
    for(int i=0;i<candiesSize;i++)
    {
        if(candies[i]>max)
        {
            max=candies[i];
        }
    }
  bool *arr=(bool*)malloc(candiesSize * sizeof(bool));
    for(int i=0;i<candiesSize;i++)
    {
        if((candies[i]+extraCandies)>=max)
        {
            arr[i]=true;
        }
        else
        {
            arr[i]=false;
        }
    }
    return arr;
}