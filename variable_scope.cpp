#include <iostream>

int myNum = 3; // this is a global variable. 
//                The hierarchy goes from local > global

void printNum();

int main()
{
    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    printNum();
    std::cout << myNum;

    return 0;
}
void printNum( ){
    std::cout << myNum;
}