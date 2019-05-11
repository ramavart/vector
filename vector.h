#pragma once
#include <initializer_list>
#include <iostream>
using namespace std;

class vector
{
private:
	int length;
	int * data;
public:
	vector(): length(0), data(nullptr) {};
	vector(initializer_list<int>const &list );
	vector(const vector & obj);
	~vector() { delete[] data; };
	void pushback(int val);
	int operator[](int index);
	void insertAt(int index, int value);
	int removeAt(int index);
	void erase();
	int find(int val);
	void operator=(const int val);
	void operator=(initializer_list<int> list);
	vector& operator=(const vector &vect);
	int size(); 
	void show();
	
};

