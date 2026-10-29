//pointer-ի սահմանափակումների ավելացում
int main() {
    int x = 10;
    int* ptr = &x;//sovorakan pointer
    const int* ptr2 = ptr;//ptr2 karanq menak kardanq
    std::cout <<* ptr2;//ok a


    const int x = 10;
    const int* ptr2 = &x;//ok a
    int* ptr = ptr2;//error:const int * cannot be used to initialize int *
    return 0;
}
