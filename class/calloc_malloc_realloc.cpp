#include <iostream>

int main () {
    void* a = malloc (sizeof (int)); //new
    std::cout<<*(int*)a<<std::endl;

    void* b = calloc (10, sizeof (int)); //initialisation with 0s
    std::cout<<*(int*)b<<std::endl;//0
    
    b = realloc (b, 15 * sizeof (int)); //bi chapy darnum a 20 * sizeof (int)

    //delete
    free(a);
    free(b);
}
