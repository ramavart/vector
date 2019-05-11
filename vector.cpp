#include "pch.h"
#include "vector.h"



vector::vector(initializer_list<int>const &list)
{
	length = list.size();
	data = new int[length];
	int id = 0;
	for (auto itr : list) {
		data[id] = itr;
		id++;
	}
}

vector::vector(const vector& obj) {
	length = obj.length;
	data = new int[length];
	int i = 0;
	while (i < length) {
		data[i] = obj.data[i];
		i++;
	}
}

int vector::size() {
	return length;
}

void vector::insertAt(int index, int value) {
	if ((index < length) && (index >=0)) {
		data[index] = value; //suppose that the new value should replace the old, without moving elements
	}
	else if(index >= 0) {
		int * newArr = new int[index+1];
		int i = 0;
		while(i<length) {
			newArr[i] = data[i];
			i++;
		}
		newArr[index] = value;
		data = newArr;
		length = index + 1;
	}
}

//suppose that order of elements is not important
int vector::removeAt(int index) {
	if ((index < length) && (index >= 0) && length >0) {
		data[index] = *(data + length - 1); //move element from the end
		*(data + length - 1) = 0;
		length--;
		return 0;
	}
	else return -1;
}

void vector::pushback(int val) {
	int * newArr = new int[length + 1];
	int i = 0;
	while (i < length) {
		newArr[i] = data[i];
		i++;
	}
	newArr[length] = val;
	length++;
	delete[] data;
	data = newArr;
}


void vector::erase() {
	if (length == 0) return;
	else {
		delete[] data;
		data = nullptr;
		length = 0;
	}
}


int vector::find(int val) {
	int i = 0;
	while (i < length) {
		if (val == data[i])  return i; 
		i++;
	}
	return -1;
}


void vector::operator=(initializer_list<int> list) {
	length = list.size();
	data = new int[length];
	int id = 0;
	for (auto itr : list) {
		data[id] = itr;
	}
}


void vector::operator=(int val) {
	if (length > 0) delete[] data;
	length = 1;
	data = new int[1];
	data[0] = val;
}


int vector::operator[](int i) {
	if ((i < length) && (i >= 0)) {
		return data[i];
	}
	else throw("index not found");
}


vector& vector::operator=(const vector &vect) {
	if (this == &vect) return *this;
	length = vect.length;
	int * newData = new int[length];
	int i = 0;
	while (i < length) {
		newData[i] = vect.data[i];
	}
	delete[] data;
	data = newData;
	return *this;
}


void vector::show() {
	int i = 0;
	while (i < length) {
		cout << data[i] << ", ";
		i++;
	}
	cout << endl; 
	
	cout <<"==============" <<endl;
	cout << endl;
}
