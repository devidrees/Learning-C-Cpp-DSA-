
// C++ Learning by Idrees


#include <iostream>
#include <format>


int main() {

	int x{ 5 };

	std::cout << std::format("x is : {} \n", x);

	int* ptrx = &x;

	std::cout << "Address of x is : " << ptrx << "\n";

	// ptr = 3; // won't work

	int y { 6 };

	std::cout << "y is " << y << "\n";

	int* ptry;

	ptry = &y;

	std::cout << "Address of y is : " << ptry << "\n";



	return 0;
}