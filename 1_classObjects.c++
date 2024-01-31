#include<iostream>
using namespace std;

// define class: a user defined data type
// Fruit is user defined data type which has some property
// public is access modifier. by which their objects can access the properties of from class 
class Fruit{
public:
    string name;
    string color;
};

int main() {

    // define a object
    // apple is object name and Fruit is user defiend datatype
    Fruit apple;
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name <<" "<< apple.color<<endl;

    // another way of define the object 
    // creating object using new keyword
    // *mango is a pointer variable to our object which is mango
    // access properties of class for ojects using -> arrow operator
    Fruit *mango = new Fruit();
    mango->name= "Mango";
    mango->color = "Yellow";
    cout<<mango->name<< " "<< mango->color<<endl;

    return 0;
}