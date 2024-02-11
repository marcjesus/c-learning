# Virtual Functions

We tried a couple of different methods to process all employees the same way.

* One worked, but did not make our code better.
* One seemed to help, but it didn't work.
The first solution to our problem is obviously wrong. We don't want to write duplicate code for each Employee type.

The second solution should work, but it doesn't. The question is why doesn't it?

Let's look at the code again:

```
#include "main.hpp"

int main()
{
    string status = "salary"; //options: hourly or salary
    string level;
    level = "hourly";
    Employee *e1; //e1 is now a pointer to Employee object
    
    if(status == level)
    {
        e1 = new Employee(); //we define an hourly employee
    }
    else
    {
        e1 = new Manager(); //we define a salaried employee
    }  
    
   ...
}
```
Let's think about what we are doing here. We assign an Employee pointer at the start of the program. This allocates memory to an Employee object. Then later, we define that same memory location as a manager. This should now supersede the previous definition, but it doesn't.

Another way to say this is:
```
The term e1 is statically bound during compile. 
We want it to be dynamically bound during executio
```

Fortunately, C++ allows dynamic binding through the use of Virtual Functions.

According to MicroSoft C++ Language Reference:

A virtual function is a member function that you expect to be redefined in derived classes. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function.

C++ Virtual Functions : 

In the program in the folder let's see if virtual functions can fix our problem.