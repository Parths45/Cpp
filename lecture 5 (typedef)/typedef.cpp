#include <iostream>
#include <vector>

//typedef std: :vector‹std::pair‹std::string, int>> pairlist_t;
// typedef std::string str_t; // str_t is now an alias for std::string
using text_t = std::string; // using keyword to create an alias for std::string
int main(){

    // typedef = reserved keyword used to create an additional name
    //   (alias) for another data type. 
    //   New identifier for an existing type
    //  Helps with readability and reduces typos
    //  
    // but we dont use typedef in modern C++ code, instead we use "using" keyword to create an alias for a type


    // pairlist_t pairlist; // pairlist is a vector of pairs of string and int

    // str_t name = "Parth";
    text_t name = "Parth";

    std::cout << name << std::endl;
    return 0;
}