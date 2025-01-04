
// C++ Learning by Idrees

// # Include brings in tools or libraries
// Header files contain definitions of functions, classes and objects

// Namespace is a folder where specific functions, classes, or objects are
// Standard C++ library uses namespace called std

// Imagine two people named "Alex" in the same room. 
// How do you know which Alex you're talking to? 
// Confusion happens!

// The std namespace avoids such confusion. 
// It organizes things like cout, cin, and endl in its "folder" (std).

// Headers (#include) bring the tools needed like hammer, screwdriver etc.
// Namespaces (std) keep the tools organised in labeled boxes


// ---------------------------------------------------------------------------

// let's use a header file we defined on our own

#include "mytools.h"
#include <iostream>
#include <string>

int main() {

	MyTools::greet("Idrees");
	int result = MyTools::add(3, 5);
	std::cout << "The sum is: " << result << "\n";

	return 0;
}
