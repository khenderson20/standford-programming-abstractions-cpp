//
// Created by kevin on 1/16/2022.
//
// this program also counts as 06.cpp
// it's just a modification of the 05.cpp, so they are together in the same file.
#include <iostream>

int main() {

    const int SENTINAL = 0;
    int number = 0, largest = 0, second_largest = 0;

    std::cout << "This program finds the largest integer in a list.\n"
              << "Enter 0 to signal the end of the list.\n";

    while(true) {
        std::cout << " ? ";
        std::cin >> number;

        if(number == SENTINAL)
            break;
        else if(number > largest)
            largest = number;
        else if(second_largest < largest)
            second_largest = number;
    }

    std::cout << "The largest value is " << largest << std::endl;
    std::cout << "The second largest value is " << second_largest << std::endl;

    return 0;
}