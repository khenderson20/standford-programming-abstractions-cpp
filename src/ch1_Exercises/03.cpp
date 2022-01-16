//
// Created by kevin on 1/15/2022.
//

#include <iostream>

int main() {

    double sum = 0.0;

    for (int i = 1; i <= 100; i += 1) {
        sum += i;
    }

    std::cout << "The sum of 1 to 100 is: " << sum << std::endl;

    return 0;
}