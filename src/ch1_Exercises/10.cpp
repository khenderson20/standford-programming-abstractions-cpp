//
// Created by kevin on 1/17/2022.
//
#include <iostream>

int main() {

    int n = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while(n > 1) {
        if(n % 2 == 0) {
            std::cout << n << " is even, so I divide it by 2 to get " << n / 2 << std::endl;
            n /= 2;
        } else if(n % 2 == 1) {
            std::cout << n << " is odd, so I multiply by 3 and add 1 to get " << (n * 3) + 1 << std::endl;
            n = (n * 3) + 1;
        }
    }

    return 0;
}
