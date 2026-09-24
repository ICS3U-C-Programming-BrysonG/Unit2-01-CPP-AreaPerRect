// Copyright (c) 2026 Bryson All rights reserved.

// .
// Created by: Bryson
// Date: 09 24, 2026
// This program asks the user for the length and width of
// a rectangle, calculates and displays the area and perimeter
// back to the user with proper units.

#include <iostream>

int main() {
    int length;
    int width;
    int area;
    int perimeter;

    // get the length from the user
    std::cout << "Enter the length (cm): ";
    std::cin >> length;
    std::cout << "Enter the width (cm): ";
    std::cin >> width;

    // calculate the area
    area = length * width;
    perimeter = 2 * (length + width);

    // display the area
    std::cout << "The area is: " << area << "cm²" << std::endl;
    std::cout << "The perimeter is: " << perimeter << "cm" << std::endl;
}
