#include <iostream>

int main(){

    char opera;
    double num1;
    double num2;

    std::cout << "***************** CALCULATOR **************\n";

    std::cout << "What operation do you want to do (+, -, /, *)? ";
    std::cin >> opera;

    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch(opera)
    {
        case '+':
            std::cout << num1 + num2;
            break;
        case '-':
            std::cout << num1 - num2;
            break;
        case '/':
            std::cout << num1 / num2;
            break;
        case '*':
            std::cout << num1 * num2;
            break;
        default:
            std::cout << "Please, enter only available operators (+,-,/,*)";
    }
    std::cout << "\n***************** CALCULATOR **************";

    return 0;
}