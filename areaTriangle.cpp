// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 28th, 2023
// This program asks the user for the base and height in cm
// then calculates and displays the area of the triangle
#include <iostream>
#include <iomanip>


void CalcArea(float base, float height) {
    // Declare variables
    float area;

    // Calculate the area
    area = base * height / 2;

    // Display the area of the triangle
    std::cout << "The area of the triangle is "
    << std::fixed << std::setprecision(2)
    << std::setfill('0') << area << "cm²." << std::endl;
}

int main() {
    // Declare variables
    float baseFloat, heightFloat;
    std::string baseStr, heightStr;

    // get base and height from user
    std::cout << "Enter the base (cm): ";
    std::cin >> baseStr;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightStr;

    // Make sure the base and height is a float using a nested try
    try {
        // convert the base to a float
        baseFloat = std::stof(baseStr);
        try {
            // convert the height to a float
            heightFloat = std::stof(heightStr);

            // Check if the base and height are less than or equal to 0
            if (baseFloat <= 0) {
                std::cout << baseFloat << " is not a valid base." << std::endl;
            } else if (heightFloat <= 0) {
                std::cout << heightFloat;
                std::cout << " is not a valid height." << std::endl;
            } else {
                // Call function to calculate area
                CalcArea(baseFloat, heightFloat);
            }
        } catch (std::exception) {
            // Height is not a float
            std::cout << heightStr << " is not a number." << std::endl;
        }
    } catch (std::exception) {
        // Base is not a float
        std::cout << baseStr << " is not a number." << std::endl;
    }
}
