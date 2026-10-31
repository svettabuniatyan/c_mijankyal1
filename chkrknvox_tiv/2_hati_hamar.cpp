#include <iostream>
int main () {
    int arr [] = {2, 4, 5, 6, 8, 7, 7, 1, 1, 2, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int lrivxor = 0;
    for (int i = 0; i < n; i ++)
        lrivxor ^= arr[i];

    //verjic arajin tarbervox bity
    int rightBit = lrivxor & (-lrivxor);
    int a=0, b=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightBit)
            a ^= arr[i];
        else
            b ^= arr[i];
    }
        
    std::cout << "Single numbers are: " << a<<" and "<<b<< std::endl;
    return 0;
}
