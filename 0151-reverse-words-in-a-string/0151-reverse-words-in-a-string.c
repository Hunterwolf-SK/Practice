char* reverseWords(char* s) {

    void reverse(char *string , int s , int e)
    {
        while(s<e)
        {
            char temp=string[s];
            string[s]=string[e];
            string[e]=temp;
            s++;
            e--;
        }
    }
int len=strlen(s);
char *result=(char*)malloc(len+1);
int index =0;

for (int i = 0; i < len;)
{
    
    while (i < len && s[i] == ' ')
        i++;

    
    int start = i;
    while (i < len && s[i] != ' ')
        i++;
    if (start < i)
    { 
        if (index != 0)
            result[index++] = ' '; 
        for (int j = start; j < i; j++)
        {
            result[index++] = s[j];
        }
    }
}
result[index] = '\0'; 


reverse(result, 0, index - 1);


int start = 0;
for (int i = 0; i <= index; i++)
{
    if (result[i] == ' ' || result[i] == '\0')
    {
        reverse(result, start, i - 1);
        start = i + 1;
    }
}
return result;
}