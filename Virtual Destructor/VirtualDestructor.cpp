/* Early binding:-reference type is considered for the binding rather then its content
late binding:-Content is considered for the binding
By default in c++ early binding takes place.

To achieve late binding Virtual keyword is used.

Constructor and destructor Invocation in case of Inheritance
when object is created, the constructor of the class whose object is created gets called.But before its body is executed it calls its immediate parent constructor.
same happens for this constructor.process is repeated till it reaches the top most parent.After that finally top most parent constructor body is executed.
after that its child constructor body is executed....finally the body of the constructor of class whose object was created will be executed
The opposite happens in case of destructor.

Below program demonstrated need of destructor.

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
