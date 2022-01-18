//
// Created by kevin on 1/17/2022.
//
#include <iostream>
#include <cmath>
// constants
const double RADIUS = 2.0;
const double NUM_RECTANGLES = 10000;
const double WIDTH = (RADIUS / NUM_RECTANGLES);

int main() {

    double area = 0.0, midpoint = 0.0, midpoint_height = 0.0;

    for(int i = 1; i <= NUM_RECTANGLES; i += 1) {
        midpoint = (RADIUS / NUM_RECTANGLES) * (i - 0.5);
        midpoint_height = sqrt(RADIUS * RADIUS - midpoint * midpoint);
        area += WIDTH * midpoint_height;
    }
    std::cout << M_PI << " can be approximated by finding the area bounded by a circular arc..." << std::endl;
    std::cout << "The area of a quarter circle by dividing it into " << NUM_RECTANGLES << " rectangles is: "
              << area << std::endl;
    return 0;
}
