#include <iostream>

int main(){

    // ingeger data type (whole number)
    int x; //declaration    
    x = 5; //assignment or initialization
    int y = 6;
    int sum = x + y;

    int age = 13;
    

    // std::cout << x << std::endl; 
    // std::cout << y << std::endl; 
    // std::cout << sum << std::endl;

    // double (number including decimal) in python float
    double pi = 3.14;
    double price = 15.99;
    double gpa = 7.9;
    double temprature = 36.6;

    // std::cout << price << '\n';

    // single character data type (char) they can only store one character (not in python)
    char grade = 'A';
    char initial = 'P';
    char currency = '$';

    // std::cout << initial << '\n';


    // boolean data type (true or false) in python bool
    bool student = true;
    bool power = false;
     
    // strings (object that represents a sequence of text) in python str

    std::string name = "Parth";
    std::string add = "123 Main St.";

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}