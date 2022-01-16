//
// Created by kevin on 1/16/2022.
//
// this program is a modification of a program from the text "AddIntegerList.cpp"
// Write a program called "AverageList.cpp" -- "07.cpp" in our case --
// that reads in a list fo integers representing exam scores and then prints out the average of them all.
// Because some unprepared student may get a 0, the SENTINAL should be -1 to mark the end of the input.

#include <iostream>

const int SENTINAL = -1;

int main() {

    std::cout << "This program finds the average of a list of numbers." << std::endl;
    std::cout << "Use " << SENTINAL << " to signal the end of the list." << std::endl;

    int total = 0, size = 0;

    while(true) {
        int value;
        std::cout << " ? ";
        std::cin >> value;

        if(value == SENTINAL)
            break;
        else {
            total += value;
            size += 1;
        }
    }

    std::cout << "The Average is " << total / size << std::endl;

    return 0;
}