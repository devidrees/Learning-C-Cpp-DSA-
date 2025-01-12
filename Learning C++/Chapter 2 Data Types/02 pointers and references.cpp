
// C++ Learning by Idrees

//  name


#include <iostream>
#include <format>


int main() {

	int x{ 52 }; // Value assignment of a variable

	int * ptrx; // Pointer definition
	// memory allocated to a pointer. integer pointer because it points to an integer value.
		
	ptrx = &x; // reference operator &
	// & is the address of operator. the variable now holds the address of the interger variable named x
	// returns address of an object suitable to hold a pointer

	int q = * ptrx; // dereferencing the pointer. Dereference operator *
	// Access the value pointed to, by the pointer
	// it is same as to say r = x

	std::cout << "x is : " << x << "\n";
	std::cout << "Address of x, ptrx is : " << ptrx << "\n";
	std::cout << "ptrx, points to x is : " << *ptrx << "\n";
	std::cout << "dereferencing, int q = *ptrx, and q is : " << q << "\n\n\n";

//------------------------------------------------ references
	// if we write int& r and assign a new value?
	// Let's add a reference, int& reference to x

	int& r = x;
	std::cout << "Refer r to x, using this int& r = x; Then say r = 78, values change.\n";

	r = 78;
	
	std::cout << "x is : " << x << "\n";
	std::cout << "Address of x, ptrx is : " << ptrx << "\n";
	std::cout << "*ptrx is : " << *ptrx << "\n";
	std::cout << "q is : " << q << "\n\n\n";

	// a reference can't be changed.


	return 0;
}