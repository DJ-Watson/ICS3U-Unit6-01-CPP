// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by DJ Watson
// Created on December 2019
// This program uses an array

#include <iostream>
#include <ctime>


int main() {
    int randomNumber[10];
    int singleNumber = 0;
    int sum = 0;
    int total = 0;
    int final = 0;

    srand(time(NULL));

    // input
    std::cout << "numbers are: ";
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        singleNumber = (rand() % 100) + 1;
        randomNumber[loop_counter] = singleNumber;
        std::cout << singleNumber << ", ";
    }
    std::cout << " " << std::endl;

    for (int loop_counter2 = 0; loop_counter2 < 10; loop_counter2++) {
        total = sum += randomNumber[loop_counter2];
    }
    final = total / 10;

    std::cout << "average: " << final << std::endl;
}
