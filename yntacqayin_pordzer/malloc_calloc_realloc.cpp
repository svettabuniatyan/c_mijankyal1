#include <cstdlib>

int main () {
    int* a = (int*) malloc (10 * sizeof (int)); //new
    
    int* b = (int*) calloc (10, sizeof (int)); //initialisation with 0s
    
    b = (int*) realloc (b, 20 * sizeof (int)); //chapy b-ic -> 20 * sizeof (int)
    
    free(a); //delete
    free(b);
}
