void printMessage(char* str) {
    std::cout << str << std::endl;
}

int main() {
    const char* text = "heyyyyyyyyy"; // const pointer

    // printMessage(text); // sxal

    printMessage(const_cast<char*>(text));//ok a
    return 0;
}
