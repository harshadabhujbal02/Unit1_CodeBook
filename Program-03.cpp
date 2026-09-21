#include <iostream>              // #include = includes a library
                                  // <iostream> = input/output stream library
                                  // It provides cout

using namespace std;              // Allows us to use cout without writing std::cout

int main()                         // int = integer return type
                                  // main() = main function
                                  // Program execution starts from main()
{
    int marks[5] = {78, 82, 91, 67, 88};
                                  // int = integer data type
                                  // marks = name of the array
                                  // [5] = array can store 5 integer values
                                  // = = assignment operator
                                  // {78, 82, 91, 67, 88} = values stored in the array
                                  // marks[0] = 78
                                  // marks[1] = 82
                                  // marks[2] = 91
                                  // marks[3] = 67
                                  // marks[4] = 88

    for (int i = 0; i < 5; i++)
                                  // for = repetition/iteration statement
                                  // int i = 0 = initializes i with 0
                                  // i < 5 = loop continues while i is less than 5
                                  // i++ = increases i by 1 after every iteration
    {
        cout << marks[i] << " ";
                                  // cout = displays output on the screen
                                  // << = insertion/output operator
                                  // marks[i] = accesses the current array element
                                  // " " = prints a space after each mark
    }

    return 0;                     // Ends the program successfully
}