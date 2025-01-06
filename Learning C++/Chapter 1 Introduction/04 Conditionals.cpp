
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

// nested if else
	if (num > 10) {
		if (num < 20) {
			std::cout << "Number is between 10 and 20.\n";
		}
		else {
			std::cout << "Number is greater than 20.\n";
		}
	}
	else {
		std::cout << "Number is 10 or less.\n";
	}

}