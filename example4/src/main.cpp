#include "config.h"
#include "lib.h"

#include "iostream"

int main() {
    std::cout << "Hello, World! Example 3" << std::endl;
    lib::makeSomeSuperJob();
    std::cout << "sumLib version: "<<lib::getVersion() << std::endl;    std::cout << "main version:  " << (PROJECT_VERSION) << std::endl;

    return 0;
}
