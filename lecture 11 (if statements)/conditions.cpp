#include <iostream>

int main (){

    // if statements = do something if a condition is true.
    //                 if not, then don't do it.

    int age;

    std::cout << "Enter you age : ";
    std::cin >> age;

    
    if (age >= 60){
        std::cout << "Its better to not drive" << std::endl;
    }
    
    else if(age >= 18){
        std::cout << "You can drive" << std::endl;
    }
    else if (age >= 16){
        std::cout << "You can drive with a permit" << std::endl;
    }
    else{
        std::cout << "You are not old enough to drive" << std::endl;
    }
    return 0;
}