#include "version.h"

#include "iostream"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << examples::getVersion() << std::endl;
    return 0;
}
