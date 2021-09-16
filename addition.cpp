// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program calculates the sum of two integers given from the user
#include <iostream>
#include <cmath>

int main() {
    // this function calculates the sum of two integers
    int integer1;
    int integer2;
    int sum;

    // input
    std::cout << "Enter the first number to add (integer): ";
    std::cin >> integer1;

    // input
    std::cout << "Enter the second number to add (integer): ";
    std::cin >> integer2;

    // process
    sum = integer1 + integer2;

    // output
    std::cout << "" << std::endl;
    std::cout << "The sum of the two integers is " << sum << "." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
