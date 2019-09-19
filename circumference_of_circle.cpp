// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 12 2019
// This Program calculates circumference
// from a user inputed dimesnions of a circle

#include <iostream>

int main() {
    // This function calculates circumference of a inputed circle
    const double TAU = 6.28;
    int radius;
    double circumference;


    std::cout << "Enter radius of circle (mm): " << std::endl;
    std::cin  >> radius;


    circumference = TAU*radius;


    std::cout << "" << std::endl;
    std::cout << "circumference is" << circumference << "mm" << std::endl;
}
