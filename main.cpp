#include <iostream>
#include <vector>
#include <string>
#include "code.cpp"
#include "function.h"


using namespace std;

void TryTestCase(Sorting* inst, vector<int> arr){
	 cout << inst->MaxArrange(arr) << endl;
}

int main(){
	Sorting* inst = new Implement();
	vector<int> arr;
	int input;
	while(cin >> input){
		arr.push_back(input);
	}

	TryTestCase(inst, arr);
	return 0;
}
