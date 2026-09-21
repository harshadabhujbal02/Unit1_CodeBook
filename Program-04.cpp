#include <iostream>              // #include = includes a library
                                  // <iostream> = input/output stream library
                                  // It provides cout and endl

using namespace std;              // Allows us to use cout without writing std::cout

int add(int, int);                // Function declaration / prototype
                                  // int = return type of the function
                                  // add = name of the function
                                  // (int, int) = function takes two integer arguments
                                  // ; = ends the function declaration

int main()                         // int = return type of main function
                                  // main() = starting point of the program
{
    int a = 10, b = 20;            // Declares two integer variables
                                  // a = first variable, value is 10
                                  // b = second variable, value is 20

    cout << "Sum = " << add(a, b) << endl;
                                  // cout = displays output on the screen
                                  // << = insertion/output operator
                                  // "Sum = " = text displayed
                                  // add(a, b) = calls the add function
                                  // a = 10 is passed as the first argument
                                  // b = 20 is passed as the second argument
                                  // add() returns 30
                                  // endl = moves the cursor to the next line

    return 0;                     // Ends the main function successfully
}

int add(int x, int y)              // Function definition
                                  // int = function returns an integer
                                  // add = function name
                                  // x = first parameter
                                  // y = second parameter
{
    return x + y;                  // Adds x and y
                                  // Returns the result to the calling statement
}