#include <iostream>

// WHILE LOOPS
/* int main()
{
    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

    return 0;
} */
// DO WHILE LOOPS - do some block of code first, then repeat again if condition is true

int main()
{

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The # is: " << number;

    return 0;
}