/*gtnel mi hat chkrknvox tivy*/
#include <iostream>
int main () {
    int arr [] = {0, 4, 3, 5, 7, 7, 1, 1, 0, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = 0;
    for (int i = 0; i < n; i ++)
        result ^= arr[i];
        
    std::cout << "Single number is: " << result << std::endl;
    return 0;
}
