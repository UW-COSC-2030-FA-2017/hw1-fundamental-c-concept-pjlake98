#ifndef EXAMPLE_H
#define EXAMPLE_H
#include <iostream>;
using namespace std;

class Example
{
public:
	Example::Example() // Constructor
	{
		stuff = new int[5]; // Create dynamically allocated memory
		cout << "Example constructor called.\n";
	}
	Example::~Example() // Destructor, will delete the dynamically allocated memory
	{
		delete stuff;  // Delete dynamically allocated memory
		cout << "Example destructor called.\n";
	}
private:
	int* stuff;
};
#endif