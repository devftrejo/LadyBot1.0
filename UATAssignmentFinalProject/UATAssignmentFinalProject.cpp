// UATAssignmentFinalProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Fernando Trejo

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
#include "Calculator.h"
#include "Double.h"
#include "TicTacToe.h"

using namespace std;

int main()
{
    string username; // Variable to hold/take-in the username.
    string password; //Variable to hold/take-in the password.

    ofstream ThingsToRememberFileOut; // ofile objects, declaring a file stream variable. (2)
    ifstream ThingsToRememberFileIn; // Creating an object of the fstream class, declaring input stream variable.

    string fileName; // Variable for user input of file name.
    string rememberThis; // Variable for user input of a message.
    string rememberThisAlso; // Variable for user input of a message.
    string item;

    int userChoice; // Variable to hold/take-in user input/choice(s).

    char again = 'y'; // Variable to hold/take-in user input.

    system("cls"); // Clears output screen of program.

    cout << "\t<3<3<3<3<3<3<3" << endl;
    cout << "\t<3 Ladybot  <3" << endl;
    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    greetings();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "X Enter Username & Password: O" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    cout << "Please enter your username and password.\n\n";
    string phrase = "Please enter your username and password."; // Phrase you wish espeak to speak.
    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\""; // To use text to speach with espeak, with female voice.
    const char *charCommand = command.c_str(); // Converts the contents of a string as a C-style, null-terminated string.
    system(charCommand); // used to pass the commands that can be executed in the command processor or the terminal of the operating system, and finally returns the command after it has been completed.
    // In short, system function is used to invoke an OS command from a C/C++ program.
    // Must use above 4 lines of code to utilize espeak.

    cout << "Please enter your username: \n"; cin >> username;
    cout << "Please enter your password: \n"; cin >> password;

    if (username == "admin") // If conditional statement.
    {
        if (password == "password") {
            cout << "~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "X Login Successful! O" << endl;
            cout << "~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
            string phrase = "Login successful!";
            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);

            do // Do while loop.
            {
                system("cls");

                cout << "\t<3<3<3<3<3<3<3" << endl;
                cout << "\t<3 Ladybot  <3" << endl;
                cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                cout << "~~~~~~~~~~~~~" << endl;
                cout << "X Contents: O" << endl;
                cout << "~~~~~~~~~~~~~" << endl << endl;
                string phrase = "What would you like to do today.";
                string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout << "1. Instructions and Commands for using Ladybot.\n";
                cout << "2. Use Ladybot to perform tasks for me.\n";
                cout << "3. Use Ladybot to remember things for me.\n";
                cout << "4. Use Ladybot's Calculator.\n";
                cout << "5. Play Tic-Tac-Toe.\n";
                cout << "6. Exit Program.\n";

                cout << "\nYour Selection: \n";

                cin >> userChoice;

                switch (userChoice)
                {
                case 1:
                {
                    

                    system("cls");

                    cout << "\t<3<3<3<3<3<3<3" << endl;
                    cout << "\t<3 Ladybot  <3" << endl;
                    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "X Instructions And Commands For Ladybot: O" << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

                    string phrase = "I am easy to utilize, just follow the prompts and enter a selection. Below are the commands I can currently execute for you.";
                    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                    cout << "~~~~~~~~~~~~~" << endl;
                    cout << "X Commands: O" << endl;
                    cout << "~~~~~~~~~~~~~" << endl << endl;

                    cout << "Enter: Hello! -> to say hello to Ladybot.\n";
                    cout << "Enter: What is the date and time? -> and Ladybot will display the current date and time.\n";
                    cout << "Enter: Who are you? -> and Ladybot will tell you who she is.\n";
                    cout << "Enter: Open Microsoft Word -> and Ladybot will open Microsoft Word.\n";
                    cout << "Enter: Open Canvas -> and Ladybot will open Canvas.\n";
                    cout << "Enter: Close Firefox -> and Ladybot will close Firefox browser.\n";
                    cout << "Enter: Good Bye! -> to say bye to Ladybot.\n\n";

                }
                    break;

                case 2:
                {

                    system("cls");

                    cout << "\t<3<3<3<3<3<3<3" << endl;
                    cout << "\t<3 Ladybot  <3" << endl;
                    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                    cout << "~~~~~~~~~~" << endl;
                    cout << "X Tasks: O" << endl;
                    cout << "~~~~~~~~~~" << endl << endl;

                    string phrase = "I can perform the following commands. ";
                    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                    cout << "~~~~~~~~~~~~~" << endl;
                    cout << "X Commands: O" << endl;
                    cout << "~~~~~~~~~~~~~" << endl << endl;

                    cout << "Enter: Hello! -> to say hello to Ladybot.\n";
                    cout << "Enter: What is the date and time? -> and Ladybot will display the current date and time.\n";
                    cout << "Enter: Who are you? -> and Ladybot will tell you who she is.\n";
                    cout << "Enter: Open Microsoft Word -> and Ladybot will open Microsoft Word.\n";
                    cout << "Enter: Open Canvas -> and Ladybot will open Canvas.\n";
                    cout << "Enter: Close Firefox -> and Ladybot will close Firefox browser.\n";
                    cout << "Enter: Good Bye! -> to say bye to Ladybot.\n\n";

                    do
                    {

                        string commands; // Variable to hold/take-in a command from the user.

                        cout << "Enter Command: ";
                        getline(cin, commands); // To get input of a command from the user.
                        cout << endl;
                        cout << "Ladybot: ";

                        STARTUPINFO si = { 0 }; // Used with CreateProcess function to specify main window properties if a new window is created for the new process.
                        PROCESS_INFORMATION pi = { 0 }; // Creates a new runtime process for an application item.
                        // Above 2 lines of code are systems programming. Creates new process/thread, in this case, opening or closing a program/application.

                        // To fill memory block of si and pi structure with ZERO.
                        ZeroMemory(&si, sizeof(si));
                        si.cb = sizeof(si);
                        ZeroMemory(&pi, sizeof(pi));

                        if (commands == "Hello!")
                        {
                            cout << "Hello! I hope I can make your day better." << endl;
                            string phrase = "Hello! I hope I can make your day better.";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                        }

                        else if (commands == "What is the date and time?")
                        {
                            datetime();
                        }

                        else if (commands == "Who are you?")
                        {
                            cout << "I am Ladybot, created to be your assistant." << endl;
                            string phrase = "I am Ladybot, created to be your assistant.";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                        }

                        else if (commands == "Open Microsoft Word")
                        {
                            cout << "Opening Microsoft Word" << endl;
                            string phrase = "Opening Microsoft Word";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                            CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &si, &pi);
                        }

                        else if (commands == "Open Canvas")
                        {
                            cout << "Openining Canvas" << endl;
                            string phrase = "Opening Canvas";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                            system("start https://learn.uat.edu/e3t/Btc/ON+113/cpY-c04/VXgBfW3Z3v77W2DpGpx4mrjS7W824bMN4x98-nMZjDVV3q3n5V1-WJV7CgTYyW3rDVsT1Dmh5rW3CCrYf6YRMF5W1WRk8j6kJpM2W3v5SrV2x2DlRW5MGlQr3TLbPrW5YMBmB3GTSv4W5r7Nxm7yZQllW8_dQXV7sKPbJW67Wcx01BVV0RVzZFjx6N2wXMN1bn8GjJZtVZW93l4j3968G7tVM-xh01ZXFpzVzG7rM6-BX6NW2X2zf96lr7dmW29gcNz1SPdY1W16GRnS78rM_PW72_SMF2VpL62W4bLHML6bzJ-rW1djYZF7V8QJh39pS1");
                        }

                        else if (commands == "Close Firefox")
                        {
                            cout << "Closing Firefox" << endl;
                            string phrase = "Closing Firefox";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                            system("TASKKILL /IM firefox.exe /F");
                        } // The system function with TASKKILL will close a program/application.

                        else if (commands == "Good Bye!")
                        {
                            cout << "Good Bye! Have a great day." << endl;
                            string phrase = "Good Bye! Have a great day.";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                            return 0;
                        }

                        else if (commands != commands)
                        {
                            cout << "I do not yet know that command, please teach it to me." << endl;
                            string phrase = "I do not yet know that command, please teach it to me.";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);
                            exit(1);
                        }

                        // Wait until child process exits and prevent leaks.
                        WaitForSingleObject(pi.hProcess, INFINITE);
                        CloseHandle(pi.hProcess);
                        CloseHandle(pi.hThread);

                    } while (1);

                }
                break;
                    
                case 3:
                
                    system("cls");

                    cout << "\t<3<3<3<3<3<3<3" << endl;
                    cout << "\t<3 Ladybot  <3" << endl;
                    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                    cout << "~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "X Remember This: O" << endl;
                    cout << "~~~~~~~~~~~~~~~~~~" << endl << endl;

                    //Writing to a text file:

                    do
                    {

                        string phrase = "Please make a selection.";
                        string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);

                        cout << "\nPlease make a selection: \n";
                        cout << "1. I would like you to remember a couple of things for me.\n";
                        cout << "2. I would like you to remind me what I asked you to remember for me.\n";
                        cout << "3. Exit program.\n";

                        cout << "\nYour Selection: \n";

                        cin >> userChoice;

                        switch (userChoice)
                        {
                        case 1:
                        {
                            system("cls");

                            cout << "\t<3<3<3<3<3<3<3" << endl;
                            cout << "\t<3 Ladybot  <3" << endl;
                            cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                            cout << "~~~~~~~~~~~~~~~~~~" << endl;
                            cout << "X Remember This: O" << endl;
                            cout << "~~~~~~~~~~~~~~~~~~" << endl << endl;

                            cout << "\nTell me two things you would like for me to remember for you: \n";
                            string phrase = "Tell me two things you would like for me to remember for you.";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char* charCommand = command.c_str();
                            system(charCommand);

                            cin.ignore(INT_MAX, '\n'); // Ignores input from input stream.
                            // INT_MAX to ignore as much user input as possible, or until a new line.

                            //Get the information we want to store in our file:

                            cout << "\nFirst thing: \n";
                            getline(cin, rememberThis); // To store the whole message and not just the first word.

                            ThingsToRememberFileOut.open("ThingsToRemember.txt", ios::out); // Associates file with object, (Opens a file to write to.).

                            if (ThingsToRememberFileOut.is_open()) {
                                ThingsToRememberFileOut << rememberThis << endl; // Writes user's message to the file.
                                ThingsToRememberFileOut << "=== End of Message ===" << endl;

                                ThingsToRememberFileOut.close(); // Close file stream.
                            }

                            cout << "\nSecond thing: \n"; // Can keep repeating process for a third time, and so on.
                            getline(cin, rememberThisAlso); // To store the whole message and not just the first word.

                            ThingsToRememberFileOut.open("ThingsToRemember.txt", ios::app); // Opens our file and Appends the new information to it. (3)

                            if (ThingsToRememberFileOut.is_open()) {
                                ThingsToRememberFileOut << rememberThisAlso << endl; // Writes user's message to the file. (4)
                                ThingsToRememberFileOut << "=== End of Message ===" << endl;

                                ThingsToRememberFileOut.close(); // Close file stream. (5)
                            }
                        }
                        
                            break;

                        case 2:
                        {
                            system("cls");

                            cout << "\t<3<3<3<3<3<3<3" << endl;
                            cout << "\t<3 Ladybot  <3" << endl;
                            cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                            cout << "~~~~~~~~~~~~~~~~~~" << endl;
                            cout << "X Reminders: O" << endl;
                            cout << "~~~~~~~~~~~~~~~~~~" << endl << endl;

                            cout << "Here are the two things you asked me to remember for you.\n";
                            string phrase = "Here are the two things you asked me to remember for you.";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char* charCommand = command.c_str();
                            system(charCommand);

                            // Reading from a text file:

                            // Open our file:

                            ThingsToRememberFileIn.open("ThingsToRemember.txt", ios::in); // Read from text file.

                            // Read file until end reached:

                            if (ThingsToRememberFileIn.is_open()) {
                                string recallThingToRemember;
                                while (getline(ThingsToRememberFileIn, recallThingToRemember)) {
                                    cout << recallThingToRemember << endl;
                                }
                                ThingsToRememberFileIn.close(); // Closes File.
                            }
                            else
                            {
                                // Check for an Error:

                                cerr << "Error Opening File." << endl;
                                exit(1);
                            }
                        }

                            break;

                        case 3:
                            return 0;
                            break;

                        default:
                            system("cls");
                            
                            cout << "\nPlease make a valid selection.\n";
                            string phrase = "Please make a valid selection.";
                            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                            const char *charCommand = command.c_str();
                            system(charCommand);

                            break;
                        }

                        cout << "Enter 'y' to go back to the main menu.\n";

                        cout << "\nYour Selection: \n";

                        cin >> again;

                    } while (again == 'y');

                    break;
                
                case 4:
                {
                    system("cls");

                    cout << "\t<3<3<3<3<3<3<3" << endl;
                    cout << "\t<3 Ladybot  <3" << endl;
                    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "X Ladybot's Calculator O" << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

                    cout << "Welcome to my calculator, have fun!\n";
                    cout << "Please enter the operation you wish to perform." << endl;
                    string phrase = "Welcome to my calculator, have fun! Please enter the operation you wish to perform.";
                    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);

                    double x = 0.0; // Variable to hold/take-in user's first number.
                    double y = 0.0; // Variable to hold/take-in user's second number.
                    double result = 0.0; // Variable to store result.
                    char oper = '+'; // Variable to store operator.

                    cout << "Format: x+y || x-y || x*y || x/y\n" << endl;

                    Calculator c; // Declaring object named c as instance of Calculator Class.
                    // Class is blueprint for how calculators work, Object is the specific calculator that does the mathematical operations.

                    cin >> x >> oper >> y; // Takes in user's input, must be in this exact order.
                    if (x == 0 && oper == '/' || oper == '/' && y == 0)
                    {
                        cout << "Division by 0 exception.\n" << endl;
                        cout << "You cannot divide by zero." << endl;
                        string phrase = "You cannot divide by zero.";
                        string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                        const char *charCommand = command.c_str();
                        system(charCommand);
                    }
                    else
                    {
                        result = c.Calculate(x, oper, y); // Calls Calculate function, and supplies entered input values. The function will then return a number/double that gets stored in result.
                    }

                    cout << "Result of Operation: " << result << endl; // Result is then cout for user to see.

                    /*while (cin >> x >> oper >> y) {
                        try {
                            result = c.Calculate(x, oper, y);
                            cout << "Result of Operation: " << result << endl;
                        }
                        catch (const Double& db) {
                            cout << "Exception handled: " << db.what() << endl;
                        }
                    }*/

                }
                    break;
                case 5:
                {
                    system("cls");

                    cout << "\t<3<3<3<3<3<3<3" << endl;
                    cout << "\t<3 Ladybot  <3" << endl;
                    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                    cout << "X Ladybot's Tic <3 Tac <3 Toe O" << endl;
                    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

                    cout << "Try my game." << endl;
                    string phrase = "Try my game.";
                    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                    const char* charCommand = command.c_str();
                    system(charCommand);

                    TicTacToe obj; // Constructor TicTacToe is one of two accessible in main due to being public.
                    obj.playGame(); // Member Function playGame, is two of two accessible in main due to being public.

                    system("pause");

                    return 0;

                }
                break;
                    
                case 6:
                {
                    system("cls");

                    cout << "\t<3<3<3<3<3<3<3" << endl;
                    cout << "\t<3 Ladybot  <3" << endl;
                    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

                    cout << "~~~~~~~~~~~~~" << endl;
                    cout << "X Good Bye! O" << endl;
                    cout << "~~~~~~~~~~~~~" << endl << endl;

                    cout << "Good Bye! Have a great day." << endl;
                    string phrase = "Good Bye! Have a great day.";
                    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    return 0;

                }
                    break;
                default:
                    system("cls");

                    cout << "\nPlease make a valid selection.\n";
                    string phrase = "Please make a valid selection.";
                    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    break;
                }

                cout << "Enter 'y' to go back to the main menu.\n";

                cout << "\nYour Selection: \n";

                cin >> again;

            } while (again == 'y');

        }
        else {

            system("cls");

            cout << "\t<3<3<3<3<3<3<3" << endl;
            cout << "\t<3 Ladybot  <3" << endl;
            cout << "\t<3<3<3<3<3<3<3" << endl << endl;

            cout << "XOXOXOXOXOXOXOXOXOXOX" << endl;
            cout << "X Invalid Password! O" << endl;
            cout << "XOXOXOXOXOXOXOXOXOXOX" << endl << endl;

            string phrase = "Invalid password, closing program.";
            string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    }
    else {

    system("cls");

    cout << "\t<3<3<3<3<3<3<3" << endl;
    cout << "\t<3 Ladybot  <3" << endl;
    cout << "\t<3<3<3<3<3<3<3" << endl << endl;

    cout << "XOXOXOXOXOXOXOXOXOXOX" << endl;
    cout << "X Invalid Username! O" << endl;
    cout << "XOXOXOXOXOXOXOXOXOXOX" << endl << endl;

    string phrase = "Invalid username, closing program.";
    string command = "espeak -ven-us+f5 -s170 \"" + phrase + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
    }
    
    system("pause>0");

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*Expectations:

    The application should not be something just to demonstrate the requirements, it should "do" something, be innovative.
    Be clever, not complex.
    This application is required to have a good UX.
    This application is required to be over commented. 
    The organization and file names must make sense and describe their purpose and the code contained in them.
    Create a C++ application or game of your choice. It must meet each the requirements of the items listed below:

Note: You can opt-out of a maximum of 2 items below which don't fit into your project, but not more than 2.

    X Opening screen with a description of the application and instructions
    X Menu for the user to choose options
    At least 4 classes total
    Inheritance (minimum 2 derived classes)
    X Polymorphism (Overloading and overriding) 
    Encapsulation
    X File input and output processing 
    Multi-Threading 
    X Exception handling
    Abstraction
*/
