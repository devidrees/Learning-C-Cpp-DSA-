#include "mytools.h"
#include <iostream>

namespace MyTools {
    void greet(const std::string& name) {
        std::cout << "Hello, " << name << "! Welcome to MyTools.\n";
    }

    int add(int a, int b) {
        return a + b;
    }



}
