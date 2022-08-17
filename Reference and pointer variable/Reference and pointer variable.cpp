
#include <iostream>

using namespace std;

int main(){
    int a=9;
    int *p;
    int &ref=a;//reference variable becomes just the alternative name
    p=&a;
    cout<<*p<<endl;
    cout<<ref;

    
}