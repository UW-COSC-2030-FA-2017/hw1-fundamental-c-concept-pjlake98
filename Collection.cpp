// James Fantin
// COSC 2030
// Homework 1

#include "Collection.h"
#include <iostream>
using namespace std;

// Constructor
template <typename object> Collection<object>::Collection()
{
	size = 0; // Set size to 0 at start
}

// Destructor
template <typename object> Collection<object>::~Collection()
{
}

// Check if the collection is empty
template <typename object> bool Collection<object>::isEmpty() const
{
	bool empty = false;
	if (size == 0) // If size is not zero, then it is not empty
	{
		empty = true;
	}
	return empty;
}

// Make collection empty by setting size to 0
template <typename object> void Collection<object>::makeEmpty()
{
	size = 0;
	return;
}

// Insert object at the end of the collection
// Return true if successful, and false if not
template <typename object> bool Collection<object>::insert(object value)
{
	bool inserted = false;
	if (size != MAX_SIZE) // If the collection is not full, then add an object
	{
		collection[size] = value;
		size++;
		inserted = true;
	}
	return inserted;
}

// Remove the object value from the collection
template <typename object> void Collection<object>::remove(object value)
{
	for (int i = 0; i < size; i++)
	{
		if (collection[i] == value)
		{
			object* temp = new object[size - i - 1];
			
			// Iterate through values after the current value to be deleted
			// Copy to a temporary array
			for (int j = 0; j < size - i-1; j++)
			{
				temp[j] = collection[i+j+1];
			}

			// Overwrite the value at i with the values stored in the temporary array
			for (int k = 0; k < size - i; k++)
			{
				collection[i + k] = temp[k];
			}
			size--;
			delete[] temp;
			break;
		}
	}
	return;
}

// Remove a random object value by picking a random index value
template <typename object> void Collection<object>::removeRandom()
{
	int index = rand() % size;
	remove(collection[index]);
	return;
}

// Check if a value is contained in the collection
// Returns true if the value was found, and false if it was not
template <typename object> bool Collection<object>::notContained(object value) const
{
	bool contained = false;
	for (int i = 0; i < size; i++)
	{
		if (collection[i] == value)
		{
			contained = true;
			break; // Break becuase if we found the value, there is no sense checking the rest of the array
		}
	}
	return contained;
}

// Test function to print the values in the current collection
template <typename object> void Collection<object>::print()
{
	cout << "Current collection contains: ";
	for (int i = 0; i < size; i++)
	{
		cout << collection[i] << ", ";
	}
	cout << "\n";
}
