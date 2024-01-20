#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.length(); - Returns string length
    // name.empty(); - check to see if a string is empty or not
    // name.clear(); - clears the string
    // name.append(); - appends a string at the end of the initial string
    // name.at(); - provides access to the data contained in the string.
    // name.insert(9, "@"); - in a specified position inserts a character
    // name.find(); - the position of whats inside the parenthesis
    // name.erase(0, 3); - erases a interval inside the string
    // access https://www.cplusplus.com/reference/string/string/ to know more

    return 0;
}