bool isSubsequence(char* s, char* t) 
{
    int sl = strlen(s);
    int tl = strlen(t);
    int i = 0; 
    int j = 0; 

    while (i < sl && j < tl) {
        if (s[i] == t[j]) {
            i++; 
        }
        j++; 
    }

    return i == sl; 
}
