// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Nov 2022
// This program is a random number guessing game

#include <iostream>
#include <string>

int main() {
    // process and output
    std::cout << "This program prints all the numbers between 1000-2000.\n";
    std::cout << std::endl;
    for (int loopCounter = 1000; loopCounter <= 2000; loopCounter++) {
        if (loopCounter % 5 == 0 && loopCounter != 1000) {
            std::cout  << "\n " << loopCounter;
        } else {
            std::cout << " " << loopCounter;
        }
    }
    std::cout << std::endl;

    std::cout << "\nDone.";
}
