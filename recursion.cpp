#include <iostream>

int factorial(int num);

int main() {

    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 slower

    std::cout << factorial(10);

    return 0;
}
int factorial(int num){
    /* interative
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result; */
    // recursive
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}
