// Copyright (c) 2021 Rodas Nega All rights reserved.
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program uses an array to calculate the mean
//   from randomly generated numbers


#include <iostream>
#include <cmath>
#include <random>


int main() {
    // this function uses an array to generate 10 random numbers
    //  from 1-100 and output the mean

    int meanNumbers[10];
    int numberInArray;
    int sum = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100 + 1);
    // [0, 100]


    // process & output
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        numberInArray = idist(rgen);
        meanNumbers[loop_counter] = numberInArray;
    }

    std::cout << "The random numbers from (1-100) are..." << std::endl;
    std::cout << "" << std::endl;

    for (int loop_counter; loop_counter < 10; loop_counter++) {
        std::cout << meanNumbers[loop_counter] << " ";
        sum += meanNumbers[loop_counter];
    }
    std::cout << "" << std::endl;

    int meanCalculation = sum / 10;

    std::cout << "\nThe mean of the randomly generated numbers is "
    << meanCalculation << std::endl;
    std::cout << "\nDone." << std::endl;
}
