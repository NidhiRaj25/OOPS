// Polymorohism" 
//  ability of objects or methods to take different forms.

// Types of Polymorphism:
// 1. compile time polymorphism: which form's of method or objcets will be called that is decided at compile time.
//   compile time seen through function overloading and operator overloading .
 
//  1. Function Overloading :
//  define a number of function with same function name aand they perform differently according to the arguments passed.  
//  arguments : how many and type

// example :  
//                            shape
//                            Area()
//                          /   |   \
//                    circle square triangle

// #include<iostream>
// using namespace std;

// class Sum{

//     public:
//          void add(int x, int y){
//             int sum =x+y;
//             cout<<sum<< endl;
//          }

//           void add(int x, int y, int z){
//             int sum =x+y+z;
//             cout<<sum<< endl;
//          }

//           void add(float x, float y){
//             int sum =x+y;
//             cout<<sum<< endl;
//          }
// };

// int main() {

//     Sum s;
//     s.add(2,3);
//     s.add(2,3,4);
//     s.add(float(3.4),float(5.4));

//     return 0;
// }


// 2. Operator Overloading :
//   eg:  2+3
//   eg:   "cat" + " women"

// #include<iostream>
// using namespace std;

// class Complex{
//     public:
//          int real;
//          int img;

//          Complex(int x, int y){
//             real =x;
//             img =y;
//          }

//         Complex operator+ (Complex &c2){
//             Complex ans(0,0);
//             ans.real = real + c2.real;
//             ans.img = img + c2.img;
//             return ans;
//         }

// };
//  int main(){

//     Complex c1(1,2);
//     Complex c2(1,3);

//     Complex c3=c1+c2;
//     cout<<c3.real<<"  i"<<c3.img<< endl;
//     return 0;
//  }

//.......................................................................................................................................................


// 2. run time polymorphism:
//  is resolved at run time 
//  using function overiding(child class define a function of parent class ).

#include<iostream>
using namespace std;

class Parent {
    public:
        // we have to use virtual keyword for function overiding.
        virtual void print(){
            cout<<"Parent class"<< endl;
        }
        void show(){
            cout<<"Parent class"<< endl;
        }
};

class Child: public Parent {
    public:
        void print(){
            cout<<"child class"<< endl;
        }
        void show(){
            cout<<"child class"<< endl;
        }
};

int main(){

    Parent *p;
    Child c;

    p = &c;
    p->print();
    p->show();  // for show function we have not assign virtual keyword.

    return 0;
}

