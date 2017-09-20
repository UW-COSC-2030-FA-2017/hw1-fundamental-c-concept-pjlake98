// James Fantin
// COSC 2030
// Homework 1

#ifndef COLLECTION_H
#define COLLECTION_H

#define MAX_SIZE 100

template <typename object> class Collection
{
public:
	Collection();
	~Collection();
	bool isEmpty() const;
	void makeEmpty();
	bool insert(object value);
	void remove(object value);
	void removeRandom();
	bool notContained(object value) const;
	void print();
private:
	int size;
	object collection[MAX_SIZE];
};
#endif
