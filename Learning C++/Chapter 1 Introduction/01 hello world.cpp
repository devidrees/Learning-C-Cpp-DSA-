
// C++ Learning by Idrees

// # Include brings in tools or libraries
// Header files contain definitions of functions, classes and objects

// to use the print command cout, we need iostream

// Namespace is a folder where specific functions, classes, or objects are
// Standard C++ library uses namespace called std

// Imagine two people named "Alex" in the same room. 
// How do you know which Alex you're talking to? 
// Confusion happens!

// The std namespace avoids such confusion. 
// It organizes things like cout, cin, and endl in its "folder" (std).

#include <iostream> // Needed for std::cout
//#include <format> // Uncomment if you want to use std::format
//using namespace std; // Uncomment if you don’t want to type std::


using namespace std;

int main() {

    //cout << "Hello Idrees!\n"; // Uncomment if using namespace std
    
    std::cout << "Hello!\n"; // will work without using namespace std

    return 0;

}


// Headers (#include) bring the tools needed like hammer, screwdriver etc.
// Namespaces (std) keep the tools organised in labeled boxes

