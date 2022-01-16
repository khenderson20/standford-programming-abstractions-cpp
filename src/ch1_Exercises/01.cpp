//
// Created by kevin on 1/15/2022.
//

#include <iostream>

int main() {

    double celsius, fahrenheit;

    std::cout << "Enter the degrees in Celsius:";
    std::cin >> celsius;
    fahrenheit = (9.0 / 5) * celsius + 32;
    std::cout << "The degrees in Fahrenheit is: " << fahrenheit << std::endl;

    return 0;
}