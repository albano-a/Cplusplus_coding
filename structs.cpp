#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled; // a default value can be assigned
};

struct Car{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main() {

    // struct = A structure that group related variables under one name
    //          structs can contain many different data types (strings, int, double, bool, etc.)
    //          variables in struct are known as "members"
    //          members can be accessed with ."Class Member Access Operator"

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";
    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    printCar(car1);
    printCar(car2);
    
    return 0;
}
void printCar(Car &car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color){
    car.color = color;
}