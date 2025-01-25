int maxVowels(char* s, int k) 
{
    int i;
    bool isvowel(char c)
    {
        return (c=='a'|| c=='e' || c=='i'|| c=='o' || c=='u');
    }
    int max=0;int vow=0;
    int n=strlen(s);
    for( i=0;i<k;i++)
    {
        if(isvowel(s[i]))
        {
            vow++;
        }
                max=vow; 
    }
for( i=k;i<n;i++)
{
    if(isvowel(s[i-k]))
    {
        vow--;
    }

if(isvowel(s[i]))
{
    vow++;
}
if(vow>max)
{
    max=vow;
}
}
return max;
    
}