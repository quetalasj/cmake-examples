#include "config.h"
#include "sumLib.h"

#include "iostream"

int main() {
    std::cout << "Hello, World! Example 3" << std::endl;
    sumLib::sum(1, 3);
    std::cout << "Lib version: "<< sumLib::getVersion() << std::endl;
    std::cout << "main version:  " << (PROJECT_VERSION) << std::endl;

    return 0;
}
