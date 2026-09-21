Student Details

Field	            |          Details

Student Name	    |    Harshada Suresh Bhujbal

Roll No.         |        AD2123

PRN	                |         125UAD1264

Class/Division	    |   SY B.Tech AI & DS – Div A

Course Name	        |    Object-Oriented Programming with c++

Unit	            |  Unit 1- Fundamentals of Object Oriented Programming

=====================================================================================
About the Repository
=====================================================================================

This repository contains 8 C++ programs demonstrating fundamental concepts of C++ programming and Object-Oriented Programming (OOP).

The programs cover variables, decision-making statements, arrays, functions, classes and objects, constructors and destructors, static data members, inline functions, and friend functions.

====================================================================================
Program 1: Basic Variables and Data Types
====================================================================================

Description:
This program demonstrates the use of basic C++ data types such as int, char, and float. It also demonstrates displaying values using cout.

Concepts Used:
* Integer (int)
* Character (char)
* Floating-point (float)
* cout
* endl

Expected Output:
Roll No: 101
Grade: A
Fee: 12500.5

======================================================================================
Program 2: If-Else Statement
======================================================================================

Description:
This program demonstrates decision-making using the if-else statement. It checks whether a student's marks are greater than or equal to 40.

Concepts Used:
* if
* else
* Relational operator (>=)
* Conditional execution
* cout

Expected Output:
Pass

========================================================================================
Program 3: Array and For Loop
========================================================================================

Description:
This program stores five marks in an integer array and uses a for loop to display each element.

Concepts Used:
* Array
* Array indexing
* for loop
* Increment operator (++)
* cout

Expected Output:
78 82 91 67 88

==========================================================================================
Program 4: Function
==========================================================================================
 
Description:

This program demonstrates the use of a function to calculate the sum of two numbers. It includes a function declaration, function call, parameters, and return value.

Concepts Used:
* Function declaration
* Function definition
* Parameters
* Arguments
* Function calling
* return

Expected Output:
Sum = 30

==========================================================================================
Program 5: Class and Object
==========================================================================================

Description:

This program demonstrates the basic concept of classes and objects in C++. A Student class contains student information such as name and age and a member function to display the information.

Concepts Used:
* Class
* Object
* Data members
* Member function
* public
* Dot (.) operator

Expected Output
Amit 20

========================================================================================
Program 6: Constructor and Destructor
========================================================================================

Description:

This program demonstrates the use of a constructor and destructor. The constructor is automatically called when an object is created, while the destructor is automatically called when the object is destroyed.

Concepts Used:
* Class
* Constructor
* Destructor
* Object creation
* Object destruction
* ~ destructor symbol

Expected Output:
Constructor called
Destructor called

=========================================================================================
Program 7: Static Data Member
=========================================================================================

Description:

This program demonstrates a static data member. The static variable count is shared by all objects of the Student class. Every time a new object is created, the constructor increases the value of count.

Concepts Used:
* static data member
* Constructor
* Multiple objects
* Scope resolution operator (::)
* Object counting

Expected Output:
3

Working:
Three objects are created:
s1 → count = 1
s2 → count = 2
s3 → count = 3

Therefore, the final value of Student::count is 3.

=========================================================================================
Program 8: Inline and Friend Function
========================================================================================

Description:

This program demonstrates an inline member function and a friend function. The getValue() function returns the private data member value, while the friend function show() is allowed to directly access the private member.

Concepts Used:
* Private data member
* Constructor
* Inline function
* Friend function
* Object
* Member access operator (.)
* Scope of private members

Expected Output:
50
50

Working
The object is created with:
Test obj(50);
The constructor stores:
value = 50
Then:
obj.getValue()
returns 50.
The friend function:
show(obj)
can directly access the private member value and prints 50.


==========================================================================================
Overall Concepts Covered
===========================================================================================
The 8 programs cover the following important C++ concepts:

* Basic data types
* Variables
* Input/Output
* Conditional statements
* Arrays
* Loops
* Functions
* Classes
* Objects
* Data members
* Member functions
* Constructors
* Destructors
* Static data members
* Inline functions
* Friend functions
* Access specifiers
* Scope resolution operator
* Member access operator

==========================================================================================
Conclusion
==========================================================================================

These programs provide a basic understanding of C++ programming and Object-Oriented Programming concepts. They demonstrate how variables, control structures, functions, classes, objects, constructors, destructors, static members, inline functions, and friend functions are used in C++ programs.
