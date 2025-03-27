/**
 * @file arrive.cpp
 * @brief A simple "Hello, World!" program with enhancements
 */

#include <iostream>

/**
 * @brief Main function that prints a greeting message
 * @return Exit status (0 for success)
 */
int main() {
    // Using '\n' instead of std::endl for better performance
    // as it doesn't flush the output buffer unnecessarily
    std::cout << "Hello, World!\n";
    
    // Adding more informative output
    std::cout << "Welcome to the improved version!\n";
    
    return EXIT_SUCCESS;  // Using standard success code
}