char* reverseVowels(char* s) {
    int len = strlen(s);
    int i = 0, j = len -1;

    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    while (i < j) {
        while (i < j && !isVowel(s[i])) {
            i++;
        }
        while (i < j && !isVowel(s[j])) {
            j--;
        }
        if (i < j) {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    return s;
}

