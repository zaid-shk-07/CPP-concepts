/*C++ is extended version of c.C++ was developed by Bjarne Stroustrup
Its is objected oriented.Because of backward compatibilty we can use all the features of c in c++.
It is close to hardware and gives more flexibility in memory management.Major applications includes OS development,game development,etc
Initial setup:-download and install c++ compiler
		set enviroment variables
		write the source code in any editor save it with .cpp extension
		on cmd.. g++ firstCode.cpp
			 a.cpp 
basic c++ program looks like*/

#include <iostream> 
using namespace std;//namespaces are used to avoid naming conflicts

int main() {
  cout << "Hello World!";//cout is object, << is overloaded
  return 0; //0 means success, Non-zero means failure
}



