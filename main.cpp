/*
 *Program......: Math Tutor V2
 *Programmers..: Nathan Fletcher, Sean Lee
 *Date.........: 2025.22.9
 *Github Repo..: https://github.com/ChThomas24/MathTutorV2new/blob/master/MathTutorV2.md
 *Description..: An easy math tutor for young people to learn simple math skills.
*/

#include <iostream>
#include <random>
#include <ctime>
#include <list>
using namespace std;

int main()
{
    string userName = "";
    int leftNum = 1;
    int rightNum = 1;
    int mathType = 1;
    char mathSymbol;
    int correctAnswer = 0;
    int userAnswer = 0;
    int temp = 0;

    srand(time(0));

    cout << R"(

 __  __       _   _       _____      _
|  \/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __
| |\/| |/ _` | __| '_ \    | || | | | __/ _ \| '__|
| |  | | (_| | |_| | | |   | || |_| | || (_) | |
|_|  |_|\__,_|\__|_| |_|   |_| \__,_|\__\___/|_|

)" << endl;
    cout << "********************************************************************************************************" << endl;
    cout << "*                          Welcome to the Silly Simple Math Tutor                                      *" << endl;
    cout << "********************************************************************************************************" << endl;
    cout << "Fun Math Facts " << endl;
    cout << endl;
    cout << "* Math teachers have problems. " << endl;
    cout << "* Math is the only subject that counts. " << endl;
    cout << "* If it seems easy, you're doing it wrong. " << endl;
    cout << "* It's all fun and games until someone divides by zero! " << endl;
    cout << endl;
    cout << "*******************************************************************************************************" << endl;

    cout << endl;
    cout << "What is your name? ";
    cin >> userName;

    cout << "Welcome ";
    cout << userName;
    cout << " to the Silly Simple Math Tutor!";
    cout << endl;

    leftNum = rand() %10 + 1;
    rightNum = rand() %10 + 1;
    mathType = rand() %4 +1;

    if (rightNum > leftNum) {
        temp = leftNum;
        leftNum = rightNum;
        rightNum = temp;
    }
    switch (mathType) {
      case 1: Addition//
        correctAnswer = leftNum + rightNum;
        mathSymbol = '+';





    }
    cout << leftNum << " " << mathSymbol << " " << rightNum << endl;

    cout << "Sorry, this is all the program does for this moment. " << endl;
    cout << "Version 2 is coming soon... " << endl;
    cout << "End of program. " << endl;

    return 0;

}