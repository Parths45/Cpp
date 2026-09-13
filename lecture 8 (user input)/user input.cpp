#include <iostream>

// cout ‹‹ (insertion operator)
// cin >> (extraction operator)

int main (){

    std::string name;
    int age;

    // std::cout << "Enter your  name : " << '\n';   // this works but if the user enters a name with spaces, it will only take the first word
    // std::cin >> name;

    std::cout << "Enter your full Name : ";
    std::getline(std::cin >> std::ws, name); // this will take the full name including spaces , std::ws is used to ignore any leading whitespace characters or newline characters that may be present in the input buffer before reading the name

    std::cout << "What's your age : ";
    std::cin >> age;

    std::cout << '\n'; // this is just to add a new line for better formatting
    std::cout << "Hello " << name << "!" << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}