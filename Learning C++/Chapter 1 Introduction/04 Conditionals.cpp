
// C++ Learning by Idrees

#include <iostream>
#include <format>

void main() {

	int num = 11;
// if else loop
	if (num % 2 == 0) {
		std::cout << "the number is even\n";
	}
	else{
		std::cout << "the number is odd\n";
	}

// if else ladder
	// if else ladder
	if (num>0) {
		std::cout << "the number is natural\n";
	}
	else if (num== 0) {
		std::cout << "the number is zero\n";
	}
	else {
		std::cout << "the number is negative\n";
	}

	for (int i = 0; i < num; i++) {

		std::cout << std::format("Number is {}\n",i);
	}



}