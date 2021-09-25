//1.dynamic_cast is used at run time to find out the correct down-cast.
//NOTE0. Need at least one virtual function in base class.
//NOTE1. if the cast is successful, dynamic_cast return a value of type new_type.
//NOTE2. if the cast fails and new_type is a pointer type, it return a null pointer of that type.
//NOTE3. if the cast fails and new_type is a reference type, it throws an exception that matches a handler of type std::bad_cast



#include <iostream>
#include <exception>
using namespace std;

class Base{
	virtual void print() { cout << "Base" << endl; }
};

class Derived1: public Base{
	void print() { cout << "Derived1" << endl; }
};

class Derived2: public Base{
	void print(){ cout << "Derived2" << endl; }
};


int main()
{
	Derived1 d1;

	Base *bp = dynamic_cast<Base *>(&d1);

	Derived1 *bp2 = dynamic_cast<Derived1 *>(bp);

	if(bp2 == nullptr)
		cout<< "null" <<endl;
	else
		cout << "not null" << endl;

	try{
		Derived2 &r1 = dynamic_cast<Derived2&>(d1);
	}
	catch(exception &e){
		cout << e.what() <<endl;
	}	
	
	return 1;
}

//Bottom Line
//1. work only on polymophic base class (at least one virtual function in base class)
//   becuase it uses this information to decide about wrong down_cast.
//2. It is used forf up_cast(D->B) and down_cast(B->D, but it is mainly use for correct down cast.
//3. using this cast has run time overhead, becuase it check object types at run time using RTTI(run time type information )
//4. if we are sure that we will never cast to wrong object then we should always avoid this cast and use static_cast.





 