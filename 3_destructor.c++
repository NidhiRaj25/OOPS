// Destructor :
// function is called when objects is deleted
// can not pass any parameter into this destructor function
// name = ~(class.name)


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

    //  create Destructor
    ~Rectangle(){
        cout<<"Destructor is called"<<endl;
    }
};

int main(){

    // manually delete constructor
    Rectangle * r1 = new Rectangle();
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    Rectangle r2(2, 4);
    cout<<r2.l<<" "<<r2.b<<endl;

    Rectangle r3= r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}