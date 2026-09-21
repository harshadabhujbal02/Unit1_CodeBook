#include <iostream>              // #include = includes a library
                                  // <iostream> = input/output stream library
                                  // It provides cout and endl

using namespace std;              // Allows us to use cout without writing std::cout

class Student                     // class = keyword used to create a class
                                  // Student = name of the class
{
public:                           // public = members can be accessed from outside the class

    string name;                  // string = data type for storing text
                                  // name = variable that stores student's name

    int age;                      // int = integer data type
                                  // age = variable that stores student's age

    void show()                   // void = function does not return a value
                                  // show = name of the member function
                                  // () = function takes no arguments
    {
        cout << name << " " << age << endl;
                                  // cout = displays output on the screen
                                  // name = displays the student's name
                                  // " " = prints a space
                                  // age = displays the student's age
                                  // endl = moves to the next line
    }
};

int main()                         // int = return type of main function
                                  // main() = starting point of the program
{
    Student s1;                    // Creates an object named s1
                                  // Student = class name
                                  // s1 = object name

    s1.name = "Amit";              // Accesses the name variable using object s1
                                  // . = member access operator
                                  // "Amit" = value assigned to name

    s1.age = 20;                   // Accesses the age variable using object s1
                                  // 20 = value assigned to age

    s1.show();                     // Calls the show() function using object s1
                                  // . = member access operator
                                  // show() = member function being called

    return 0;                      // Ends the program successfully
}