long repeatedString(string s, long n) {
    long countInSingleString = 0;
    long strLength = s.length();
    
    for (int i = 0; i < strLength; i++) {
        if (s[i] == 'a') {
            countInSingleString++;
        }
    }
    
    long fullRepeats = n / strLength;
    long totalA = fullRepeats * countInSingleString;
    
    long mn = n % strLength;
    for (int i = 0; i < mn; i++) {
        if (s[i] == 'a') {
            totalA++;
        }
    }
    
    return totalA;
}
