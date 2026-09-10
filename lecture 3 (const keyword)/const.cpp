#include <iostream>

int main (){

    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    // creating a program for finding the circumference of a circle 

    const double PI = 3.14159; // constant variable for pi
    double radius = 10;
    double circumference = 2 * PI * radius;
    
    std::cout << circumference << " cm" << std::endl; 

    return 0;
}