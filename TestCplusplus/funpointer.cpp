
#include <iostream>
using namespace std;

//Q1. What is the function pointer and how to create them?
//Q2. Calling the function using the function pointer?
//Q3. How to pass the function pointer as an argument?
//Q4. How to return the function pointer?
//Q5. How to use the array of function?
//Q6. Where to use function Pointers?


//Ans: how to crete

// int i;
// int *p = &i;


// int add(int a, int b){
// 	return a + b;
// }

// int fun1(int (*somefun)(int, int)){
// 	int c = somefun(1, 2);
// 	return c;
// }

// int main()
// {
// 	int (*fun)(int, int) = add;
// 	//int (*fun1)(int, int) = &add;

// 	int c = (*fun)(1, 2);
// 	//int c = fun1(add);
// 	printf("%d\r\n", c);

// }

//return the function pointer

// int add(int a, int b){
// 	return a + b;
// }

// int sub(int a, int b){
// 	return a -b;
// }

// typedef int(*math)(int, int);

//  int (*fun (int type))(int,int)
// {
// 	if(type == 1)
// 		return add;
// 	if(type == 2)
// 		return sub;
// }

// int main()
// {
// 	int (*somefun)(int, int) ;
// 	int (*fun1)(int, int) = &add;

// 	somefun = fun(1);
// 	int c = somefun(2,2);
// 	printf("%d\r\n", c);

// 	somefun = fun(2);
// 	c = somefun(4,2);
// 	printf("%d \r\n", c);

// 	return 1;

// }


//Arrar of function pointer

// int add(int a, int b){
// 	return a + b;
// }
 
// int sub(int a, int b){
// 	return a - b;
// }

// //typedef int(*mathfun)(int,int);

// int main(){

// 	int (*Arr[2])(int,int) = {add,sub};

// 	int c = (*Arr[0])(1,2);
// 	int d = (*Arr[1])(3,2);
	
// 	printf("c = %d \r\n", c);
// 	printf("d = %d\n", d);

// 	return 1;
// }


//whre to use the function pointer

int compare(const void *p, const void *q){

	int l = *(const int*) p;
	int r = *(const int*) q;

	return l<r;
}

int main()
{
	int Arr[5] = {2, 1, 4, 5, 6};

	int ArrSize = sizeof(Arr)/sizeof(Arr[0]);
	int elementSize = sizeof(Arr[0]);

	qsort(Arr, ArrSize, elementSize, compare);

	for(int i = 0; i < ArrSize; ++i){
		printf("%d\t", Arr[i]);
	}

	printf("\r\n");

	return 1;
}