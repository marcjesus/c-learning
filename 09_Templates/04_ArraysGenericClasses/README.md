# Generic Classes Issues

There is an issue with generic classes that I would like to talk about. It has to do with arrays.

Recall, compilers need to know what variable type and how many elements are required for an array at compile time. The information is necessary to allocate memory for the array.

Use a constructor to allocate memory for the array. Set a default value to each element in the array.

Now the compiler can properly allocate memory for the array.

In a later lesson in the course will we learn about memory allocation and deallocation through the use of the commands "new" and "delete".

