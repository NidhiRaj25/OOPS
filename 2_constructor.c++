// constructor: 
// used to initialise an objects
// this is function which is called when an object is created.
// same name as class name 
// types:
// 1. default 
// 2. parameterised
// 3. copy

#include<iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;

    // default constructor - no arguments passed
    Rectangle(){
        l=0;
        b=0;
    }

    // parameterised constructor - arguments pass
    Rectangle(int x, int y){
        l=x;
        b=y;
    }

    // copy constructor - initialize an object by another existing objects
    Rectangle(Rectangle& r){
    l= r.l;
    b= r.b;
    }
};

int main(){

    Rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    Rectangle r2(2, 4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3= r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}