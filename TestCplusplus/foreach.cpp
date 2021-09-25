//Question	: What is the difference between range based for loop and for_each in c++?
//Answer	: 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int val) {cout << val << endl;}

int main()
{
	vector<int> Vec;
	int ar[10];

	for( int i = 0; i < 10; i++ ){
		Vec.push_back(i);
		ar[i] = i;
	}

	for(int i: ar){
		cout << i <<endl;
	}

	for_each(Vec.begin() , Vec.end(), [](int i){
		cout << i << endl;
	});

	for_each(Vec.begin(), Vec.end(), print);


	return 0;
}



 