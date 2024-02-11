# Vectors Introduction

We have been using the C++ standard function library throughout this course (recall I/O streams, string, etc.). Well, there is actually another part of the Standard C++ library, the object oriented class.

The Object oriented library has many containers that are quite useful for programming. We now going to take some time to work with some of them.

The first class we will discuss is the vector class.

Let's look at and play with an example of a vector.

In the program below, we create a vector of integers, called vectorInts.

You should notice the following:

* We included a C++ library called vector
* To instantiate a vector :
```
 std::vector<int> vectorInts; 
```
* The vector has size 0 when we instantiate it.
* We use 'resize' to change the size of the vector.

```
// constructing vectors
#include <iostream>
#include <vector>  //Need to include the vector library!


int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //Changing the size of vectorInts to 6
  vectorInts.resize(6);
  std::cout<<"\n\nvectorInts now has "<<vectorInts.size()<<" elements\n";
 
  return 0;
}
```


## Vectors  and Iterators

Vectors are more versatile than arrays, and can be resized during runtime. We can also insert elements into a vector (we'll insert elements a little later in the lesson).

This characteristic adds a lot of freedom to vectors that we don't have with arrays. It also means we have to adjust how we access elements in a vector. Since we can add elements anywhere in the vector, we do not refer to the first element of a vector as the zero element, we call it the beginning. The last element is called end. To keep track of where we are in the vector, we need an iterator.

In the program below, you should notice the following:

* We use ::assign to add and define elements to the vector
* We instantiate an iterator for the vector class:
```
  //creating an iterator for the vector
  std::vector<int>::iterator it;
```
* We use the iterator to cycle through the vector. Begin is the first element in the vector, end it the last.
```
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";
```
* Notice, we dereference the iterator to print out the value of the vector:
```
std::cout<<*it<<" ";
```
* Notice, we have to increment the iterator as we execute the for loop.
```
 for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
```
<br>
```
// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>


int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;  
  //creating an iterator for the vector
  std::vector<int>::iterator it;
  
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.assign(4,3);
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  
  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
    std::cout<<*it<<" ";

  return 0;
}

```

Results: 
vectorInts has 0 elements Adding four elements to the vector vectorInts has 4 elements VectorInts has these elements: 3 3 3 3
