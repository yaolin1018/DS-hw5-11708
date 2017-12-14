#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <string>
#include "function.h"

using namespace std;
string Implement::MaxArrange(vector<int>arr)
{
   vector<string> concatnumbers ;
   sort ( arr.begin( ) , arr.end( ) ) ;
    do {
      std::ostringstream numberstream ;
      for ( int i : arr )
	 numberstream << i ;
      concatnumbers.push_back( numberstream.str( ) ) ;
   } while ( std::next_permutation( arr.begin( ) ,
	    arr.end( ) )) ;
   return *( max_element( concatnumbers.begin( ) ,
	 concatnumbers.end( ) ) ) ;
}
