//Question: Function Hiding in C++
#include <iostream>
using namespace std;

class Base{
	public:
		void fun() {cout << "void" << endl;}
	   int fun(int i){
		   cout << "Base" << endl;
		   return 0;
	   }
};

class Derived: public Base{
	public:
	using Base::fun;

	  int fun(char c){

		  cout << "Derived" << endl;
		  return 0;
	  }
};

int main()
{
	Derived d;

	d.fun('a');
	d.fun(1);
	d.fun();
	
	return 1;
}

 