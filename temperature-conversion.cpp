#include <iostream>

int main()
{
    char unit;
    double temp;

    std::cout << "***** Temperature conversion *****\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "Wha unit would you like to convert to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (-32 + temp) / 1.8;
        std::cout << "Temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter in only C or F!";
    }

    /* switch(unit){
        case 'C':
            std::cout << "The temperature from C to F is " << (temp_value * (9/5)) + 32 << " F";
            break;
        case 'F':
            std::cout << "The temperature from F to C is " << (temp_value -32) * (5/9) << " C";
            break;
        default:
            std::cout << "Enter a valid temperature unit";
    } */


    std::cout << "**********************************\n";

    return 0;
}