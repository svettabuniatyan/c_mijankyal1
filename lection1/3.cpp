//որ թվից սկսած է float ճշտությունը ավելի փոքր, քան int
#include <iostream>
int main() {
    float f = 0.0f;
    while (true) {
        float next_f = f + 1.0f;
        if (next_f == f) {
            std::cout << "sahmany: " << f << std::endl;
            break;
        } 
        f = next_f;
    }
    return 0;
}
