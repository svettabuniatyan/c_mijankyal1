#include <iostream>
int main () {
    int arr [] = {2, 4, 5, 8, 7, 7, 1, 1, 2, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = 0;
    for (int i = 0; i < n; i ++)
        result ^= arr[i];
        
    std::cout << "Single number is: " << result << std::endl;
    return 0;
}
