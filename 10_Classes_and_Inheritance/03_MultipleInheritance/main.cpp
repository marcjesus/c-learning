/*
C++ classes can inherit from more than one class. 
This is known as "Multiple Inheritance".
The form for declaring multiple inheritance is:class DerivedClass : access BaseClass1, ... ,access BaseClassN

For example, in the statement shown below, the derived class is TeachingAssociate. It inherits attributes from Staff and from GradStudent.
class TeachingAssociate: public Staff, public GradStudent
*/
/*Goal: understand multiple inheritance*/

#include "main.hpp"

int main()
{
    TA t1;
    t1.setSupervisor("Dr. Caohuu");
    t1.setId(55555);
    t1.setTitle("Adjunct Prof.");
    cout<<t1.getSupervisor()<<" "<<t1.getId()<<" "<<t1.getTitle();
    return 0;
}