#include <iostream>
#include <cmath>

double newtonSqrt(double x, int maxIterations){
    double guess;
    guess = x / 2.0;
    for(int i = 0; i < maxIterations; i++){
        double newGuess = 0.5 * (guess + x / guess); // Newton-raphson
        // Check if the guess is close enough to the actual square root
        if(std::abs(newGuess - guess) < 0.000001){
            return newGuess;
        }
        guess = newGuess;
    }
}

int main() {

    double x = 10.0;
    int max = 100;
    double result = newtonSqrt(x, max);
    std::cout << "The square root of " << x << " is approximately "<< result;

    return 0;
}