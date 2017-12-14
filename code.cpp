#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
#include "function.h"

using namespace std;

string Implement::MaxArrange(vector<int> arr)
{
        string s = "";
        sort(arr.begin(), arr.end());
        if(arr[0] == 0){
            return "0";
        }
        for(int i = 0; i < arr.size(); i++){
            s.append(to_string(arr[i]));
        }
        return s;
    }


