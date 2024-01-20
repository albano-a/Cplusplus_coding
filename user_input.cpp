#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main ()
{
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age; // \n leaves the buffer

    std::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name); // ws cleans the whitespace from the previous buffer

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    

    return 0;
}