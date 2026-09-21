#include <iostream>              // #include = includes a library
                                  // <iostream> = input/output stream library
                                  // It provides cout and endl

using namespace std;              // using = allows us to use something
                                  // namespace = defines a scope
                                  // std = standard C++ namespace
                                  // This allows us to write cout instead of std::cout

int main()                         // int = integer return type
                                  // main() = main function
                                  // Program execution starts from main()
{
    int marks = 45;                // int = integer data type
                                  // marks = variable name
                                  // 45 = value stored in marks

    if (marks >= 40)               // if = checks a condition
                                  // marks = value stored in the variable
                                  // >= = greater than or equal to operator
                                  // 40 = condition value
                                  // Meaning: Check whether marks are 40 or more
    {
        cout << "Pass";            // cout = displays output on the screen
                                  // << = insertion/output operator
                                  // "Pass" = text displayed on the screen
    }

    else                           // else = executes when the if condition is false
    {
        cout << "Fail";            // Displays "Fail" on the screen
    }

    return 0;                      // return = returns a value from the function
                                  // 0 = indicates successful program execution
}