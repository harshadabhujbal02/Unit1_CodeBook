#include <iostream>              // Includes the input/output stream library
                                  // It provides cout and endl

using namespace std;              // Allows us to use cout, endl, etc.
                                  // without writing std:: before them

int main()                         // Main function; program execution starts here
{
    int roll = 101;                // int = integer data type
                                  // roll = variable name
                                  // 101 = value stored in roll

    char grade = 'A';              // char = character data type
                                  // grade = variable name
                                  // 'A' = character stored in grade

    float fee = 12500.50;          // float = decimal/real number data type
                                  // fee = variable name
                                  // 12500.50 = value stored in fee

    cout << "Roll No: " << roll << endl;
                                  // cout = displays output on the screen
                                  // "Roll No: " = text displayed
                                  // << = insertion operator
                                  // roll = displays the value of roll
                                  // endl = moves cursor to the next line

    cout << "Grade: " << grade << endl;
                                  // Displays the text "Grade: "
                                  // Displays the value stored in grade
                                  // endl moves to the next line

    cout << "Fee: " << fee << endl;
                                  // Displays the text "Fee: "
                                  // Displays the value stored in fee
                                  // endl moves to the next line

    return 0;                     // Ends the main function
                                  // 0 indicates successful program execution
}