int minBitFlips(int start, int goal) 
{
    int ans=0;
    int xor=start ^ goal;
while(xor!=0){
ans=ans+(xor&1);
xor=xor>>1;
}
return ans;
}