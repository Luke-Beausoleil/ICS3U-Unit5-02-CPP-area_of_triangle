// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program calculates the area of a triangle

#include <iostream>
#include <string>

void CalculateArea(float base, float height) {
    // calculate area

    // variables
    float area = 0.5 * base * height;

    // process & output
    if (base <= 0 || height <= 0) {
        std::cout << "\nInvalid Input. Try Again" << std::endl;
        std::cout << "Done." << std::endl;
    } else {
        std::cout << "\nThe area is " << area << " units²" << std::endl;
        std::cout << "Done." << std::endl;
    }
}

int main() {
    // this function calls another function

    // variables
    std::string baseInput;
    std::string heightInput;
    float base;
    float height;
    float area = 0.5 * base * height;

    // input
    std::cout << "Enter the dimension of the base: ";
    std::cin >> baseInput;
    std::cout << "Enter the dimension of the height: ";
    std::cin >> heightInput;
    try {
        base = std::stof(baseInput);
        height = std::stof(heightInput);
        CalculateArea(base, height);  // call function
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input. Try Again" << std::endl;
        std::cout << "Done." << std::endl;
    }
}
