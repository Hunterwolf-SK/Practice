bool doesValidArrayExist(int* derived, int derivedSize) 
{
    int xor=0;
    for(int i=0;i<derivedSize;i++)
    {
        xor=xor^derived[i];
    }
    if(xor)
    {
        return false;
    }
    else
    return true;
}