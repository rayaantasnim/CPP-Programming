// Include necessary libraries
#include <iostream>   // For input/output
#include <string>     // For using the string class

// Notice: we are NOT writing "using namespace std;"
// That means we must use std:: explicitly

int main() {
    // -------------------------------
    // Example: Declaring a string with std::
    // -------------------------------
    std::string greeting = "Hello";

    // -------------------------------
    // Example: Printing with std::cout
    // -------------------------------
    std::cout << greeting << std::endl;

    // -------------------------------
    // Key Notes:
    // -------------------------------
    // - If you omit "using namespace std;", you must prefix
    //   standard library objects with std:: (like std::string, std::cout).
    // - This is considered safer in large projects because it avoids
    //   name conflicts with other libraries.
    // - For small beginner programs, "using namespace std;" is fine,
    //   but professionals often prefer explicit std:: usage.

    return 0;
}
