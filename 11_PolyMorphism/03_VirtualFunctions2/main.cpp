/*
In the program below we define a manager and an employee.

The virtual function makes this possible:
virtual float calcWeeklyPay(); 
Note: we only had to add the keyword virtual in one location in the base class. 
Any class derived from Employee that has a function by the same name will inherit the same properties.

*/
#include "main.hpp"

int main()
{
    const string status = "salary"; //options: hourly or salary
    string level;
    
    //assign an manager to e1
    level = "salary";
    Employee *e1; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }  
    
    e1->setPayRate(12000.00);

    cout<<"e1 pay: $"<<e1->calcWeeklyPay();
    
    //assign an employee to e2
    level = "hourly";
    Employee *e2; //e1 is now a pointer to Employee object
    
    if(status != level)
    {
        e2 = new Employee(); //we define an hourly employee
    }
    else
    {
        e2 = new Manager(); //we define a salaried employee
    }  
    
    e2->setPayRate(10.00);
    cout<<"\ne2 pay: $"<<e2->calcWeeklyPay();
    
    return 0;
}