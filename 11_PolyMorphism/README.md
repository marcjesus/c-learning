# Inheritance Issue

To understand polymorphism, we need to take a deeper look at Inheritance.

Let's begin with an example of inheritance that will highlight the need for polymorphism.

In the program below we have two classes; Employee and Manager.

A manager is an employee, so we can use inheritance to derive the Manager class from the Employee class. The difference between the two classes lies in the payRate. Employees are paid an hourly wage, managers are paid a salary.

The weekly pay for an employee is calculated as:

* pay = PayRate * HoursWorked

For the manager weekly pay is calculated as:

* pay = Salary / 52

Look into 01_Inheritance Issues folder to see examples of not working:

Case 1 <br>
This doesn't work. We get the wrong pay. e1 pay: $480000 The pay is calculated as an hourly employee.

Case 2 <br>
This doesn't work. We get the wrong pay. e1 pay: $480000 The pay is calculated as an hourly employee.
