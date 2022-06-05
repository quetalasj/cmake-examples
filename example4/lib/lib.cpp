#include "lib.h"
#include "config.h"
#include "iostream"

namespace lib {
    int makeSomeSuperJob() {
        std::cout << "Hello from sumLib!" << std::endl;
        return 42;
    }

    int getVersion() {
        return (PROJECT_VERSION);
    }
}