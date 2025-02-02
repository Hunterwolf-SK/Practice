char* convert(char* s, int numRows) 
{
    if (numRows == 1) {
        return s;
    }

    char** table = (char**)malloc(numRows * sizeof(char*));
    for (int i = 0; i < numRows; i++) 
    {
        table[i] = (char*)malloc((strlen(s) + 1) * sizeof(char));
        table[i][0] = '\0';
    }

    int isBeginning = 1;
    int ptr = 0;

    for (int i = 0; i < strlen(s); i++) 
    {
        if (ptr == 0) 
        {
            isBeginning = 1;
        }

        if (ptr == numRows - 1) 
        {
            isBeginning = 0;
        }

        if (ptr < numRows && isBeginning) 
        {
            strncat(table[ptr], &s[i], 1);
            ptr += 1;
        }

        if (isBeginning == false) {
            strncat(table[ptr], &s[i], 1);
            ptr -= 1;
        }
    }
    char *result = (char*)malloc((strlen(s) + 1) * sizeof(char));
    result[0] = '\0';
    for (int i = 0; i < numRows; i++)
    {
        strcat(result, table[i]);
        free(table[i]);
    }
    free(table);

    return result;

}