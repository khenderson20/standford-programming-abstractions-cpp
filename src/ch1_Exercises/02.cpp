//
// Created by kevin on 1/15/2022.
//
// 1 inch = 0.0254 meters
// 1 foot = 12 inches

#include <iostream>

int main() {

    const double ONE_INCH = 0.0254, ONE_FOOT = 12.0;
    double meters, feet, inches;

    std::cout << "Enter the distance in meters:";
    std::cin >> meters;
    inches = (meters / ONE_INCH);
    feet = (inches / ONE_FOOT);
    std::cout << meters << " meters is equivalent to --\n" << inches << " inches\n" << feet << " feet\n";

    return 0;
}