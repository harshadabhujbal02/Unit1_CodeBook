#include <iostream>              // #include = includes a library
                                  // <iostream> = input/output stream library
                                  // It provides cout and endl

using namespace std;              // using = allows us to use something
                                  // namespace = defines a scope
                                  // std = standard C++ namespace
                                  // Allows us to write cout instead of std::cout


class Demo                         // class = keyword used to create a class
                                  // Demo = name of the class
{
public:                           // public = members can be accessed from outside the class

    Demo()                         // Demo() = constructor
                                  // Constructor has the same name as the class
                                  // It is automatically called when an object is created
    {
        cout << "Constructor called\n";
                                  // cout = displays output
                                  // << = insertion/output operator
                                  // "Constructor called" = message to display
                                  // \n = moves to the next line
    }

    ~Demo()                        // ~ = destructor symbol
                                  // Demo = class name
                                  // ~Demo() = destructor
                                  // Destructor is automatically called when an object is destroyed
    {
        cout << "Destructor called\n";
                                  // cout = displays output
                                  // "Destructor called" = message to display
                                  // \n = moves to the next line
    }
};

int main()                         // int = return type
                                  // main() = starting point of the program
{
    Demo d;                        // Creates an object named d of class Demo
                                  // Creating d automatically calls the constructor

    return 0;                      // Ends the program successfully
                                  // After main ends, object d is destroyed
                                  // This automatically calls the destructor
}