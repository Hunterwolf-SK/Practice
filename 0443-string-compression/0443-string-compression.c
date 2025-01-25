int compress(char* chars, int charsSize)
 {  int result = 0;
    for (int i = 0; i < charsSize; i++)
     {  char c = chars[i];
        int count = 0;
        while (i < charsSize && chars[i] == c) 
        {
            count++;
            i++;
        }
        if (count == 1) 
        {
            chars[result++] = c;
        } 
        else 
        {
            chars[result++] = c;
            char str[10];
            sprintf(str, "%d", count);
            for (int j = 0; str[j] != '\0'; j++)
             {
                chars[result++] = str[j];
            }
        }
        i--;
    }
    return result;
}