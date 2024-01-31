
// types of inheritence:
// 1.  single Inheritence:   A->B  class B directly i herit class A 's property


// #include<iostream>
// using namespace std;

// class Parent{
//     public:
//         Parent(){
//             cout<<"Parent class "<<endl;

//         }
// };

// class child: public Parent {
// public:
//     child(){
//         cout<<"child class"<<endl;
//     }
        
// };

// int main(){

//     child c;

//     return 0;
// }


// ........................................................................................................................................

// 2. Multi-level Inheritence: Parent class is derived from another class

//    classs A-> Class B -> clsass C

// #include<iostream>
// using namespace std;

// class Parent{
//     public:
//         Parent(){
//             cout<<"Parent class "<<endl;

//         }
// };

// class child: public Parent {
// public:
//     child(){
//         cout<<"child class"<<endl;
//     }
        
// };

// class GrandChild: public child {
// public:
//     GrandChild(){
//         cout<<"Grandchild class"<<endl;
//     }
        
// };

// int main(){

//     GrandChild gc;

//     return 0;
// }




// 3. Multiple Inheritence: child class is inhering from multiple Parent classess:

// class A    Class B
//      \     /
//      CLASS C

// #include<iostream>
// using namespace std;

// class Parent{
//     public:
//         Parent(){
//             cout<<"Parent class "<<endl;

//         }
// };

// class Parent2{
//     public:
//         Parent2(){
//             cout<<"Parent2 class "<<endl;

//         }
// };

// class child: public Parent , public Parent2{
// public:
//     child(){
//         cout<<"child class"<<endl;
//     }
        
// };

// class GrandChild: public child {
// public:
//     GrandChild(){
//         cout<<"Grandchild class"<<endl;
//     }
        
// };

// int main(){

//     child c;

//     return 0;
// }


// 4. Hierarchical Inheritence: one parent class has multiple child class.

//           class A
//             /  \
//       CLASS B   CLASS C

// #include<iostream>
// using namespace std;

// class Parent{
//     public:
//         Parent(){
//             cout<<"Parent class "<<endl;

//         }
// };

// class Parent2{
//     public:
//         Parent2(){
//             cout<<"Parent2 class "<<endl;

//         }
// };

// class child1: public Parent {
// public:
//     child1(){
//         cout<<"child1 class"<<endl;
//     }
        
// };

// class child2: public Parent {
// public:
//     child2(){
//         cout<<"child2 class"<<endl;
//     }
        
// };

// class GrandChild: public child1 {
// public:
//     GrandChild(){
//         cout<<"Grandchild class"<<endl;
//     }
        
// };

// int main(){

//     child1 c;

//     return 0;
// }

//  Hybrid Inheritence: combination of more than one inheritence type

//                 Class A
//                 /      \
//            class B    class C
//                         |
//                       class D

// Diamond Problem :
// base class has multiple parent classes having a common ancesstor class


//                          class F
//                           /    \
//                    Class D     CLASS E
//                      |             |
//                   CLASS B      CLASS C
//                          \     /
//                          CLASS A

#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Parent class "<<endl;

        }
};

class Parent2{
    public:
        Parent2(){
            cout<<"Parent2 class "<<endl;

        }
};

class child1: public Parent {
public:
    child1(){
        cout<<"child1 class"<<endl;
    }
        
};

class child2: public Parent {
public:
    child2(){
        cout<<"child2 class"<<endl;
    }
        
};

class GrandChild: public child1, child2 {
public:
    GrandChild(){
        cout<<"Grandchild class"<<endl;
    }
        
};

int main(){

    GrandChild c;

    return 0;
}