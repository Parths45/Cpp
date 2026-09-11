#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main (){

    // using namespace first; using this you dont need to use the namespace name to access the variable x like first::x, you can just use x directly. But it is not recommended to use this in large projects because it can lead to ambiguity if there are multiple variables with the same name in different namespaces.
    int x = 0;

    std::cout << x << std::endl; // prints 0
    std::cout << first::x << std::endl; // prints 1
    std::cout << second::x << std::endl; // prints 2

    return 0;
}