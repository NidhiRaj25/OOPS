// Encapsulation :
// bindig of method & variable together into a single unit(class)
// data is only aceessible from the class methods.
// also leads to data abstraction (hiding) thats why class is called abstract data type(ADT).

#include<iostream>
using namespace std;

class ABC{
    int x;
    public:

    void set (int n){
        x=n;
    }

    int get(){
        return x;
    }
};

int main()  {
    ABC obj1;
    obj1.set(3);
    cout<<obj1.get()<<endl;

    return 0 ;
}