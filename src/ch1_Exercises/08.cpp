//
// Created by kevin on 1/16/2022.
//

#include <iostream>

int main() {

    int number = 0, reverse = 0, newNumber = 0;
    std::cout << "Enter an integer > 0:";
    std::cin >> number;

    while(number > 0) {
        newNumber = (newNumber * 10) + number % 10;
        number /= 10;
    }
    std::cout << "Reversed number is " << newNumber << std::endl;
    return 0;
}