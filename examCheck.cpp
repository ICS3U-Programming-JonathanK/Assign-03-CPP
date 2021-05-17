// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May 17 2021
// This program allows the user enters their age
// and then the program tells the user if they can date the
// grandparent's grandchild or not based on their age.

#include <iostream>

int main() {
    int classHeldInt;
    int classAttendInt;
    std::string classHeldStr;
    std::string classAttendStr;
    int percentAttendance;

    // get the user's class held
    std::cout << "Enter the amount of classes helded: ";
    // get the age from the user as a string
    std::cin >> classHeldStr;
    std::cout << " " << std::endl;
     // get the user's class attended
    std::cout << "Enter the amount of classes attended: ";
    // get the age from the user as a string
    std::cin >> classAttendStr;
    std::cout << " " << std::endl;

try {
    // convert the user's age to an int
    classHeldInt = std::stoi(classHeldStr);
    classAttendInt = std::stoi(classAttendStr);
    // check if the age is above 20 and below 40
    percentAttendance = (float(classAttendInt)/float(classHeldInt)) * 100;
    std::cout  << percentAttendance <<"\n";
    if (percentAttendance > 75) {
        std::cout << "Your attendance meets the exam requirements."
                      " Congratulations!";
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Thanks for playing" << std::endl;
    } else {
        std::cout << "I'm sorry but the number doesn't meet the requirement.\n";
        std::cout << " " << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Thanks for playing" << std::endl;
    }
} catch (std::invalid_argument) {
    // The user did not enter an integer.
    std::cout << classHeldStr << " is not an integer.\n";
    std::cout << "Thanks for playing" << std::endl;
} catch (std::invalid_argument) {
    // The user did not enter an integer.
    std::cout << classAttendStr << " is not an integer.\n";
    std::cout << "Thanks for playing" << std::endl;
}
}
