#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(){

    }
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main(){

    // overloaded constructors = multiple constructors w/ same name but different parameters
    //                           allows for varying arguments when instantiating an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "peppers");
    Pizza pizza3;

    return 0;
}