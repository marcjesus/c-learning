# Generic Classes

In C++, we can create generic classes as well as functions. We use the same template type placeholder as we did for functions.

If the class is going to accept strings, we need to include the 'using namespace' compiler directive, or it will not recognize the string variable. ``` //header file for main.cpp #include

//The class accepts strings, so we need to use namespace
using namespace std;

```

Just as with non-generic classes, we have private and public members. To signify the variable type that is changable, use the name you assigned in the template command. In our case, this is T.

Everywhere you see the T, this is where we would substitute int, char, float, string if we wanted to do this a no-generic class.

    private:
        const int size = 5;
        T grade;
        int studentId;
    public:
       //note: I used a constructor that accepts the grade input
        StudentRecord(T input);
        void setId(int idIn);
        void printGrades();
};

*The member functions must all be treated as generic functions. You will have to add the template command to each member function. ```

template<class T>
StudentRecord<T>::StudentRecord(T input)
{
    grade=input;
}

//Notice I still add the template<class T here, even though this is not a generic //function. It is in a generic class. 

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    cout<<"ID# "<<studentId<<": ";
    cout<<grade<<"\n ";
    cout<<"\n";
}

```