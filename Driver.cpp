// James Fantin
// COSC 2030
// Homework 1

#include "Collection.h"
#include "Collection.cpp"

int main()
{
	Collection<int> col;

	cout << "Inserting five numbers into collection\n";

	// Let's insert some numbers
	col.insert(12);
	col.insert(0);
	col.insert(12948);
	col.insert(42);
	col.insert(4);

	col.print();

	// Check if empty
	cout << "Check if empty: " << col.isEmpty() << "\n";

	// Remove 42
	col.remove(42);

	cout << "Remove 42 from collection.\n";
	col.print();

	// Remove 87 (should fail)
	col.remove(87);

	cout << "Remove 87 from collection. Should fail and remove nothing.\n";
	col.print();

	// Remove random;
	col.removeRandom();

	cout << "Remove a random number from the collection.\n";
	col.print();

	// Make the collection empty
	col.makeEmpty();

	cout << "Make the collection empty.\n";
	col.print();

	// Check if empty
	cout << "Check if empty: " << col.isEmpty() << "\n";

	return 0;
}
