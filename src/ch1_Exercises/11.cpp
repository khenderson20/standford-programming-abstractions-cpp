//
// Created by kevin on 1/17/2022.
//
// This program calculates an approximation of pi using the first 10,000
// terms of the infinite series (courtesy of the mathematician, Leibniz):
//
//    pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 ...
#include <iostream>
#include <cmath>
int main() {

    int denominator = 1, i = 1;
    double sum = 1.0;
    std::cout << M_PI << std::endl;

    do {
        if(i % 2 == 0) {
            sum += 1.0/(denominator + 2);
            denominator += 2;
        } else if(i % 2 == 1) {
            denominator += 2;
            sum -= 1.0/denominator;
        }
        i += 1;
    }while(i < 10000);
    std::cout << " PI ~= " << sum * 4 << std::endl;
    return 0;
}
