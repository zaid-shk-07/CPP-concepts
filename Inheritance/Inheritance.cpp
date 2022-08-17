single
multilevel 
multiple
hybrid/multipath
hierarchical

:public

private doesnt comes
public become public
protected becomes protected

:private 
private doesnt comes
public become private
protected becomes private

:protected

private doesnt comes
public become protected
protected becomes protected

parent class
class Vehicle {
public:
public void fun1(){
cout<<"fun1 got called";	
}
   
};

// Derived class
class Car: public Vehicle {
  
};

int main() {
  Car myCar;
  myCar.fun1();
  
}