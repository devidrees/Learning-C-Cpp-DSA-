
// C++ Learning by Idrees

// if else, switch, ternary

#include <iostream>
#include <format>

void main() {

	int num = 11;

// if Statement

	if (num >= 18) {
		std::cout << "You are eligible to vote!\n";
	}
// if - else Statement

	if (num % 2 == 0) {
		std::cout << "Age number is even\n";
	}
	else{
		std::cout << "Age number is odd\n";
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

// if - else if ladder

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

//-------------------------------------------------------------

// switch statement
	
	int day = 3;

	switch (day) {
	
	case 1: 
		std::cout << "Monday\n";
		break;
	case 2:
		std::cout << "Tuesday\n";
		break;
	case 3:
		std::cout << "Wednesday\n";
		break;
	case 4:
		std::cout << "Thursday\n";
		break;
	case 5:
		std::cout << "Friday\n";
		break;
	case 6:
		std::cout << "Saturday\n";
		break;
	case 7:
		std::cout << "Sunday\n";
		break;
	}
//----------------------------------------------
// Ternary Operator
//A compact way to write simple if-else conditions

// syntax: condition ? value_if_true : value_if_false;

	int age = 20;

	std::cout << (age >= 18 ? "Adult\n" : "Minor\n");


	std::cout << (age == 20 ? "twenty\n" : "not twenty\n");

}