#include <iostream>

int main(){

    // type conversion = conversion a value of one data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type (int)

    // Implicit

    int x = 3.14; // implicit conversion from double to int output will be 3 because the decimal part is truncated
    char y = 100; // implicit conversion from int to char output will be 'd' because 100 is the ASCII value for 'd'

    std::cout << x << '\n';
    std::cout << y << '\n';

    // Explicit casting

    std::cout << (char)100 << '\n';
    return 0;
}