#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main()
{
    std::string firstName = "Arthur";
    std::string lastName = "Zussman";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName;

    return 0;
}

std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}


/* double square(double length);
double cube(double length);

int main()
{
    double length = 12.0;
    double area = square(length);
    double vol = cube(length);

    std::cout << "Area: " << area << " cm2\n";
    std::cout << "Volume: " << vol << " cm3\n";

    return 0;
}
double square(double length){

    double result = length * length;

    return result;
}
double cube(double length){

    double volume = length * length * length;

    return volume;
} */