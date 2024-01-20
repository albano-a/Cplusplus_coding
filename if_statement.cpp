#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100)
    {
        std::cout << "You are too old to enter!";
    }
    else if(age >= 18)
    {
        std::cout << "Welcome to the jungle!";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!";
    }
    else if(age >= 100)
    {
        std::cout << "You are too old to enter!";
    }
    else
    {
        std::cout << "You're not allowed to enter!";
    }

    return 0;
}