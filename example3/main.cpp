#include "version.h"

#include "iostream"

int main() {
    std::cout << "Hello, World! Example 3" << std::endl;
    std::cout << examples::getVersion() << std::endl;
    return 0;
}
