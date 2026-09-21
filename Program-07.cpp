#include <iostream>              // #include → tells C++ to include a library
                                 // <iostream> → input/output library, used for cout

using namespace std;             // using → use
                                 // namespace → group of names
                                 // std → standard C++ namespace
                                 // This allows us to write cout instead of std::cout


class Student {                  // class → creates a class
                                 // Student → name of the class
                                 // { → starts the class body

public:                          // public → members can be accessed from outside the class

static int count;                // static → shared by all objects of the class
                                 // int → integer data type
                                 // count → variable name
                                 // This variable stores the total number of Student objects


Student() {                       // Student() → constructor
                                  // Constructor has the same name as the class
                                  // It is automatically called when an object is created
                                  // { → starts constructor body

count++;                          // count → static variable
                                  // ++ → increases the value by 1
                                  // Every time a Student object is created,
                                  // count increases by 1

}                                 // } → ends constructor

};                                // }; → ends the Student class


int Student::count = 0;           // int → integer data type
                                  // Student → class name
                                  // :: → scope resolution operator
                                  // count → static class variable
                                  // = 0 → initializes count to 0


int main() {                      // int → main() returns an integer
                                  // main() → starting point of the program
                                  // { → starts main function


Student s1, s2, s3;               // Student → class name
                                  // s1 → first Student object
                                  // s2 → second Student object
                                  // s3 → third Student object
                                  // Creating these 3 objects calls the constructor 3 times


cout << Student::count;           // cout → displays output
                                  // << → insertion/output operator
                                  // Student → class name
                                  // :: → scope resolution operator
                                  // count → accesses the static count variable
                                  // Output will be 3


return 0;                         // return → sends a value back
                                  // 0 → indicates successful program execution

}                                 // } → ends main()