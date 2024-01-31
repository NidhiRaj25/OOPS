// Friend Function:
//  It is a non-member function which can access private member of a class.

#include<iostream>
using namespace std;
class A{

    int x;

public:
    A(int y){
        x=y;
    }
    friend void print(A &obj);

};

void print(A  &obj){
    cout<<obj.x<<endl;
};

int main(){

    A obj(5);
    // cout<<obj.x<<endl;
    print(obj);

    return 0;
}