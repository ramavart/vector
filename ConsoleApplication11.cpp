
#include "pch.h"
#include <iostream>
#include "vector.h"



int main()
{
	cout << "initializer List1 instance({1,2,3,4});" << endl;
	vector instance({1,2,3,4});
	instance.show();

	cout << "after instance = 100" << endl;
	instance = 100;
	instance.show();

	cout << "initializer List1 instance2{ 121,32,43 }" << endl;
	vector instance2{ 121,32,43 };
	instance2.show();

	cout << "copy constructor" << endl;
	vector instance4(instance2);
	instance4.show();
	
	cout << "find 121" << endl;
	cout << instance4.find(121) << endl;

	cout << "find 143" << endl; 
	cout << instance4.find(143) << endl;

	cout << "instance2.insertAt(2, 87);" << endl;
	cout << "before" << endl;
	instance2.show();
	instance2.insertAt(2, 87);
	cout << "after" << endl;
	instance2.show();

	cout << "instance2.insertAt(6, 34)" << endl;
	cout << "before" << endl;
	instance2.show();
	instance2.insertAt(6, 34);
	cout << "after" << endl;
	instance2.show();

	cout << "instance2.removeAt(4)" << endl;
	instance2.removeAt(4);
	instance2.show();
	cout << "instance2.removeAt(1)" << endl;
	instance2.removeAt(1);
	instance2.show();
	cout << "instance2.removeAt(28)" << endl;
	cout << instance2.removeAt(28) << endl;

	instance2.pushback(14);
	instance2.show();

	cout <<"instance2[1]" << endl;
	cout << instance2[0] << endl;
	try {
		cout << "instance2[10]" << endl;
		cout << instance2[10] << endl;
	}
	catch (...) {
		cout << "ok. move forward" << endl;
	}

	instance2.erase();
	instance2.show();


	
	return 0;
} 

