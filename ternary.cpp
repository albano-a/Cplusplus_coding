#include <iostream>

int findMax(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false

    // int grade = 26;
    // grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    // int number = 9;
    // number % 2 ? std::cout << "Odd" : std::cout << "Even";

    bool hungry = true;
    // hungry ? std::cout << "You are hungry" : std::cout << "You are full"; 
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}