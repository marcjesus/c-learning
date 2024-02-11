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

## Assign, Push Back, Insert, Emplace and Add elements

### Assign
Since vectors are instantiated without elements, we need to have a method to add elements. The first method we learned is ::assign.

::Assign will write over elements in the vector, which is what we want in some cases, but in others it is not desired.

### Push Back
We can add elements to the end (or back) of a vector using ::push_back.

### Insert
Insert is another method to add elements to a vector.

Insert adds elements to the location after the iterator.

To add elements using insert:

* Set the iterator to one before the location where you would like to add an element.
* Use insert to add the element.
This sounds complicated, let's look at an example and you'll see it is fairly straight forward.

In the program below, note the following:

* Before we insert, we need to set the iterator to a known destination. In this case we set it to the beginning of the vector plus one.

```
 it  = vectorInts.begin() + 1;
```

* To insert the element we need to give the insert location and the value of the element. In this case the location is the location of the iterator (begin + 1). The value is -1.

```
vectorInts.insert(it, -1);
```

Also note in the program below, I reset the iterator to the beginning of the vector before inserting the next value.

You need to do this after an insert because all iterator locations are invalid after an insert.

In this program I set the iterator to the beginning of the vector. Then during the insert I moved the iterator 3 locations to add the next element, which has a value of -2. it = vectorInts.begin(); vectorInts.insert(it + 3, -2);

### Emplace

Another method for adding elements is ::emplace.

Emplace puts an element in a vector at the position pointed to by the iterator.

Emplace differs from insert in the method used to insert the element. Insert copies the values of the vector while emplace does an in-place insertion. This means the insertion occurs at the point after the iterator.

The difference makes emplace more efficient than insert in special cases.
In the program below, we see the code:

```
  //insert an element after the first element
  it  = vectorInts.begin() + 1;
  vectorInts.emplace(it, -1);
```
To use emplace we must first set the iterator to the desired location. In this case, after the first element.

```
 it  = vectorInts.begin() + 1;
```

Then we use emplace to add the element.

```
vectorInts.emplace(it, -1);
```

## Pop Back

We can remove the last element of a vector using ::pop_back.

For example:
```
  //pop the last element off the vector
  vectorInts.pop_back();
```
pop_back DOES NOT return a value!

For example, the code shown below will generate an error message and will not compile.
```
 int a; 
  a = vectorInts.pop_back(); //this line does not compile
```

You will get an error message telling you ::pop_back has a void value for a return.

```
main.cpp: In function ‘int main()’:
main.cpp:39:5: error: void value not ignored as it ought to be
   a = vectorInts.pop_back();
```
