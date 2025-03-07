// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved.
// Created by: Volodymyr Kryzhanovskyi
// Date: 03 07 2025
// This program calculates circumference and area of a circle.=
#include <iostream>
#include <cmath>
int main() {
    float Radius;
    int area;
    int perimeter;
    std::cout
    << "Enter the radius length (cm)" << std::endl;
    std::cin >> Radius;
    perimeter = 2 * M_PI * Radius;
    area = M_PI * pow(Radius, 2);
    std::cout << "Perimeter is " << perimeter << "cm" << std::endl;
    std::cout << "Area is " << area << "cm" << std::endl;
}
