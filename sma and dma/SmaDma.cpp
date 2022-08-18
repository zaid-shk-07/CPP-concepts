//variables allocated through sma ends with block
//variables allocated through dma must be de-allocated using delete keyword

#include <iostream> 
using namespace std; 
  
class myclass{

}
  
int main() 
{ 
    myclass mc;//sma
    myclass *p=new myclass;//dma
    delete p;		
}