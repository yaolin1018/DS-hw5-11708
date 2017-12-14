#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#include <string>
#include <vector>
using namespace std;

class Sorting{
public:
	virtual string MaxArrange(vector<int> arr)=0;
};

class Implement: public Sorting{
public:
	string MaxArrange(vector<int> arr);
};
#endif