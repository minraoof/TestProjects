
#include <iostream>
#include <typeinfo>
using namespace std;

//class Base {};

int main()
{
	auto x = 20;
	auto y = 20.5;
	//auto b = new Base();

	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(b).name() << endl;

	return 0;
}

