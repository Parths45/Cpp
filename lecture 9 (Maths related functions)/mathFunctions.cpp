#include <iostream>
#include <cmath> // cmath is a header file that contains mathematical functions like sqrt(), pow(), sin(), cos(), etc. , this is required for all rest functions expect max() and min() functions which are defined in the <algorithm> header file
int main(){

    double x = 3;
    double y = 4;
    double z;
    
    // max() function is used to find the maximum of two numbers it is defined by std::max(x,y);
    // z = std::max(x,y);

    // min() function is used to find the minimum of two numbers it is defined by std::min(x,y);
    // z = std::min(x,y);

    // pow() function is used to find the power of a number it is defined by std::pow(x,y); where x is the base and y is the exponent
    // z = std::pow(2,4);

    // sqrt() function is used to find the square root of a number it is defined by std::sqrt(x);
    // z = std::sqrt(255);

    // abs() function is used to find the absolute value of a number it is defined by std::abs(x); 
    // z = std::abs(-2 55); // whether the number is negative or positive it will return the positive value of that number


    // round() function is used to round a number to the nearest integer it is defined by std::round(x);
    // z = std::round(3.14); // it will return 3

    // ceil() function is used to round a number up to the nearest integer it is defined by std::ceil(x);
    z = std::ceil(3.14); // it will return 4

    // floor() function is used to round a number down to the nearest integer it is defined by std::floor(x);
    // z = std::floor(3.99); // it will return 3

    

    std::cout << z << '\n'; 


    return 0;
}

// there are many more mathematical functions available in the cmath header file like sin(), cos(), tan(), log(), exp(), etc. which can be used for various mathematical calculations.

// go to https://cplusplus.com/reference/cmath/ .. to know more about the mathematical functions available in the cmath header file and their usage.
