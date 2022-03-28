// UATAssignmentFinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Function Definitions:

#pragma warning(disable : 4996) // Disables deprecation warning to override and allow use of time function localtime().
// I actually know it's not recommendable, but I lost time trying to figure out a solution.

//#include <bits/stdc++.h> // Suppose to include every standard library, but does not work.
#include <iostream> // Includes functions for cin, cout, etc..
#include <windows.h> // Accesses the Win32 API functions, suppose to include libraries stdio.h and stdlib.
#include <stdio.h> // Includes input/output functions for printf, scanf, etc..
#include <string.h> // Used to manipulate arrays of characters.
#include <cstdlib> // Includes general purpose functions for math, inter alia. Must be called for system commands/functions as well.
#include <ctime> // For time, converts given time since epoch to a calendar local time and then to a character representation.
#include <string> // Includes functions to use strings.
#include <fstream> // Access to fstream, (file stream), objects, for file input and output.
#include <climits> // Includes the limitation of an integer, highest number it can hold, (For using INT_MAX.).
#include <exception> // base class for standard exceptions.

#include "Functions.h"

using namespace std;

// function to greet the user according to time:
void greetings() {
    // current date/time based on system:
    time_t t = time(0); // get time now.
    tm *now = localtime(&t); // Struct.

    if (now->tm_hour < 12) {
        cout << "Welcome! And Good Morning." << endl;
        string phrase = "Welcome! And Good Morning.";
        string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
        const char *charCommand = command.c_str(); // char array for c string function.
        system(charCommand);
    }

    else if (now->tm_hour >= 12 && now->tm_hour <= 16) {
        cout << "Welcome! And Good Afternoon." << endl;
        string phrase = "Welcome! And Good Afternoon.";
        string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (now->tm_hour > 16 && now->tm_hour < 24) {
        cout << "Welcome! And Good Evening." << endl;
        string phrase = "Welcome! And Good Evening.";
        string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime() {
    time_t now = time(0);
    char *dt = ctime(&now); // Character array, in C programming language.
    cout << "Here is the current date and time: " << endl << dt << endl;
    string phrase = "Here is the current date and time: ";
    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
} // Displays date and time.
