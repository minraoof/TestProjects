//Question	: What is the difference between reference and pointer in C++?
//Answer	: 

#include <iostream>
using namespace std;


int main()
{
	int i = 10;
	int var = 20;

	int &r = 0; //referce
	int *p = &i; //pointer

	//&r = var;


	cout << &i << '\t' <<  r << '\t' << var << '\t' << &p << endl;

	return 0;
}

/******components******/
//1. Memory Address
//2. Reassignment is Not possible with Reference
//3. NULL Value
//4. Arithmatic operation
//5. Indirection

 