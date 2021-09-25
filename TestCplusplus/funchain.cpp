//Question: what is the function chaining in C++?
//Ans: it gives good code analysis power.
#include <iostream>
using namespace std;

class Base{
	int _a, _b;

	public:
	Base& seta(int a){ _a = a; return *this;}
	Base& setb(int b){ _b = b; return *this;}
	void print() { cout << "a = " << _a << "\tb = " << _b <<endl;}
};

int main()
{
	Base b;
	b.seta(10).setb(10).print();
	b.print();
	
	return 1;
}

 