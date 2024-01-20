#include <iostream>

/* int main() {

    for(int i = 10; i >= 0; i-=2){
        std::cout << i << '\n';
    }

    std::cout << "HAPPY NEW YEAR!\n";

    return 0;
} */

    /* 
    What does break/continue do?
    break = break out of a loop
    continue = skip current iteration 
    */

int main() {

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }    

    return 0;
}