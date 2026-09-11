#include <iostream>

int main(){

    // arithmetic operators = return the result of a specific
    //  arithmetic operation (+ - * /)

    int students = 20;
    // ADDTION
    // students = students + 1; // add 1 to students
    // students+=1; // add 1 to students using shorthand operator
    // students++; // add 1 to students using increment operator


    // SUBSTRACTION

    // students = students - 1; // subtract 1 from students
    // students-=1; // subtract 1 from students using shorthand operator
    // students--; // subtract 1 from students using decrement operator

    // MULTIPLICATION 

    // students = students * 2; // multiply students by 2
    // students*=2; // multiply students by 2 using shorthand operator

    // DIVISION
    // students = students / 2; // divide students by 2
    // students/=2; // divide students by 2 using shorthand operator

    // REMAINDER
    int remainder = students % 3; // get the remainder of students divided by 3 

    std::cout << students << '\n';
    std::cout << remainder << '\n';

    return 0;
}