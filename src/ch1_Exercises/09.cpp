//
// Created by kevin on 1/16/2022.
//
#include <iostream>
#include <math.h>

int main() {

    int n = 0;

    std::cout << "This program factors a number." << std::endl;
    std::cout << "Enter a number to be factored: ";
    std::cin >> n;

    switch (n) {
        case 0:
            std::cout << "0 has no factors...\n";
        case 1:
            std::cout << n << " has only one factor 1\n";
        default:
            int f = 2;
            std::cout << n << " = ";
            do {
                if(n % f == 0) {
                    std::cout << f << " * ";
                    n /= f; // divide by prime number
                } else
                    f += 1;
            }while(n >= f * f);
            std::cout << n << std::endl;
    }

    return 0;
}
