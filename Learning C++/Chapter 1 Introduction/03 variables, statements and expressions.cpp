// An expression is a combination of operands (variables, constants, etc.) 
// and operators that is evaluated to produce a single value.

// An expression produces a value

// 5 + 3         // An arithmetic expression; evaluates to 8.
// x > 10        // A relational expression; evaluates to true or false.
// y = z + 1     // An assignment expression; evaluates to the assigned value.


// A statement is a complete instruction that tells the program to perform an action.
// It may include expressions but ends with a semicolon(;).
// A statement executes an operation or cause a change in the program state.

// int x = 5;     // A declaration and assignment statement.
// x++;           // A statement to increment x.
// std::cout << x; // A statement to print x.

#include <iostream>
#include <format>

int main(){

//------------ variables
	int x = 14;
	int y = 16;
	int z {};

	std::cout<<std::format("result {}\n", z=x+y);

//------------ statements and expressions in an if else
	if (x > y) {
		std::cout << "x is greater";
	}
	else if(y>x){
		std::cout << "y is greater";
	}
	else {
		std::cout << "x is equal to y";
	}




	return 0;
}