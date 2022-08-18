
#include <iostream>

using namespace std;

class base {
public:
	base()	
	{ cout << "Constructor of base\n"; }
	virtual ~base()//try removing this
	{ cout << "Destructor of base\n"; }	
};

class derived : public base {
public:
	derived()	
	{ cout << "Constructor of derived\n"; }
	virtual ~derived()
	{ cout << "Destructor of derived\n"; }
};

int main()
{
derived *d = new derived();
base *b = d;
delete b;
getchar();
return 0;
}
