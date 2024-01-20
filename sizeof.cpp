#include <iostream>

int main() {
    
    // sizeof() = determines the size in bytes of a variable, data type, class...

    std::string name = "Andrew";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
    std::cout << sizeof(std::string) << " bytes\n";

    return 0;
}
