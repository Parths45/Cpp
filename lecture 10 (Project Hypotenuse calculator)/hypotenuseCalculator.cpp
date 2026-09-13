#include <iostream>
#include <cmath>

int main(){

    // formula = c = sqrt(a^2 + b^2) where a and b are the two sides of a right triangle and c is the hypotenuse

    double a;
    double b;
    double c;

    // accepting the values of a and b from the user 
    std::cout << "Enter the value of side a (in cm) : ";
    std::cin >> a;
    std::cout << "Enter the value of side b (in cm ): ";
    std::cin >> b;

    // calculating the value of c using the formula
    c = std::sqrt(std::pow(a,2 )+ std::pow(b,2));

    std::cout << "The value of hypotenuse c is : " << c << " cm" << std::endl;

    return 0;
}