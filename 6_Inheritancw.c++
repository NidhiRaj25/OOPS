// Inheritance:
// a class inherits properties of another class

    //   (Pareent class/ super class)  A -> B (child class / sudo class)
        
        
        
// ACCESS SPECIFIER:
//  1. PUBLIC: Data and function  can be accessed from anywhere in code.
// 2. Protected : Data and function can be accessible in own class, parent class and derived class.
// 3. Private : Data  and function can accessible only in own class.

#include<iostream>
using namespace std;

class Parent {

    public: 
        int x;

    protected:
        int y;

    private:
         int z;

};
// publically inherit parent class's property
class child: public Parent{
    // x willl remain public
    // y will remain protected
    // z will not be accessible
};

// inherit privately
class child2 : private Parent{
    // x willl remain private
    // y will remain private
    // z will not be accessible
};

class child2 : protected Parent{
    // x willl remain protected
    // y will remain protected
    // z will not be accessible
};


int main (){

    Parent p;
    p.x;

    return 0;
}




