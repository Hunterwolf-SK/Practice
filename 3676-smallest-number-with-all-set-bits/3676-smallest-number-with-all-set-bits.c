int smallestNumber(int n)
{
   int result=0;
   while(n>0)
   {
    result=(result<<1) | 1;
    n>>=1;
    
   } return result;
}