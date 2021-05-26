// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program calculates the area of a triangle

#include <iostream>
#include <string>

void CalculateArea(float base, float height) {
    // calculate area
    float area = 0.5 * base * height;
    std::cout << "\nThe area is " << area << " units²\nDone." << std::endl;
    }

int main() {
    // this function calls another function

    // variables
    std::string baseInput;
    std::string heightInput;
    float base;
    float height;

    // input
    std::cout << "Enter the dimension of the base: ";
    std::cin >> baseInput;
    std::cout << "Enter the dimension of the height: ";
    std::cin >> heightInput;
    try {
        base = std::stof(baseInput);
        height = std::stof(heightInput);
        if (base <= 0 || height <= 0) {
            std::cout << "\nInvalid Input. Try Again\nDone." << std::endl;
        } else {
            CalculateArea(base, height);  // call function
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input. Try Again\nDone." << std::endl;
    }
}
