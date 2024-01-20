#include <iostream>
template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main() {
    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types

    //                     Ex. "It's like a cookie-cutter..."
    //                     "Cookies are the same shape, but the dough used can be different"

    std::cout << max(1, 2.1) << '\n';

    return 0;
}