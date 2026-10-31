int sockMerchant(int n, vector<int> ar) {
for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ar[j] > ar[j + 1]) {
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    
    int totalPairs = 0;
    int i = 0;
    
    
    while (i < n - 1) {
        if (ar[i] == ar[i + 1]) {
            totalPairs++; 
            i += 2;
        } else {
            i++;
        }
    }
    
    return totalPairs;
}
