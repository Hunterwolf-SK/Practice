int reverse(int x)
{
    long int remainder=0,sum=0;
    while(x!=0)
    {
        remainder=x%10;
        sum=(sum*10)+remainder;
        if(sum > INT32_MAX || sum < INT32_MIN)
        {
            
            return 0;
        }
        x=x/10;
    }
    return sum;
        
         
    

}