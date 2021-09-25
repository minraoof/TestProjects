#include <iostream>
using namespace std;

//Const_cast in C++

//Note
//The expression const_cast<T>(v) can be used to change the const or volatile qualifiters of pointers or references
//Where T must be a pointer, reference, or pointer-to-member type

//Note: 1
//When we need to call some 3rd party library where it is taking variable/object as non-const but not changing that

/*int main()
{

	const int a1 = 10;
	const int *b1 = &a1;

	int *d1 = const_cast<int *>(b1);
	*d1 = 15; //Invalid and underfined behavour

	cout << a1 << endl;
	cout << *d1 << endl;

	int a2 = 20;
	const int *b2 = &a2;
	int *d2  = const_cast<int *>(b2);
	*d2 = 25;

	cout << a2 << endl;
	cout << *d2 << endl;

	*d2 = 30; //Valid code!!
	
	return 1;
}*/


void thirdpartyLibrary(int *x)
{
	int k = 10;
	cout << k + *(x);
}

int main()
{
	const int x =20;
	const int *px = &x;

	thirdpartyLibrary(const_cast<int*>(px));
	
	return 1;
}

 