char* gcdOfStrings(char* str1, char* str2) {
    int l1=strlen(str1);
    int l2=strlen(str2);
    int l4=l1+l2;
    char *str3=((char*)malloc(l4+1));
    char *str4=((char*)malloc(l4+1));
    strcpy(str3,str1);
    strcat(str3,str2);
    strcpy(str4,str2);
    strcat(str4,str1);

    if(strcmp(str3,str4)!=0)
    {
return "";
    }
    while (l1!= l2)   
    {  
         if (l1 > l2)  
            {  
            l1 = l1 - l2;   
            }  
             else  
            {  
                l2 = l2-l1;
                }     
                  
    }   
       int l3=l2;
      char *result=((char*)malloc(l3+1));
    strncpy(result,str1,l3);
    result[l3]='\0';
    return result;

    }
    
    

    

        