//
// Created by kevin on 1/15/2022.
//

#include <iostream>

int main() {

    int n = 0;
    int sum = 0;
    std::cout << "Enter a positive integer N, and I will compute the sum of the first N odd integers:";
    std::cin >> n;

    for (int i = 1, nextOdd = 1; i <= n; i += 1, nextOdd += 2) {
        if(i == n)
            std::cout << nextOdd << " = ";
        else
            std::cout << nextOdd << " + ";
        sum += nextOdd;
    }

    std::cout << sum;
    return 0;
}