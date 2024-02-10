/*
Destructors are special class functions that are called whenever an object goes out of
scope. Just like a constructor, a destructor is called automatically.
Destructors cannot: return a value, accept parameters.
Destructors must have the same name as the class.
The syntax for a destructor is similar to the constructor:
The destructor is identified with a tilda (~) symbol.
Declaring a destructor: ~className()  //this is a destructor 
classname::~classname()
{
     //tasks to be completed before going out of scope
}   
*/

/*Goal: use pointers to allot memory locations
*for a class. 
*/

#include "main.hpp"

int main()
{
    Dog d2(666666);
    cout<<d2.getLicense();
    return 0;
}