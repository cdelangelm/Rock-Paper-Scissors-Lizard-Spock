// Rock-Paper-Scissors-Lizard-Spock project from the conditional and logic block lesson 
// Codecademy

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    // Live long and prosper
    srand(time(NULL));
    int computer = rand() % 5 + 1;
    int user = 0;

    cout << "=================================\n";
    cout << "Rock Paper Scissors Lizard Spock!\n";
    cout << "=================================\n\n";

    cout << "1) Rock!\n";
    cout << "2) Paper!\n";
    cout << "3) Scissors!\n";
    cout << "4) Lizard\n";
    cout << "5) Spock\n\n";
    cout << "Shoot! ";

    for (;;) {
        cin >> user;
        if (user <= 5) {
            break;
        }
        else {
            cout << "Invalid input, try again!";
            continue;
        }
    }

    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int lizard = 4;
    int spock = 5;
    string computerString = "";
    string userString = "";

    if (computer == rock) {
        computerString = "Rock";
    }
    else if (computer == paper) {
        computerString = "Paper";
    }
    else if (computer == scissors) {
        computerString = "Scissors";
    }
    else if (computer == lizard) {
        computerString = "Lizard";
    }
    else if (computer == spock) {
        computerString = "Spock";
    }

    if (user == rock) {
        userString = "Rock";
    }
    else if (user == paper) {
        userString = "Paper";
    }
    else if (user == scissors) {
        userString = "Scissors";
    }
    else if (user == lizard) {
        userString = "Lizard";
    }
    else if (user == spock) {
        userString = "Spock";
    }

    // GAME LOGIC
    /*Scissors > Paper, Lizard
      Paper    > Rock, Spock
      Rock     > Lizard, Scissors
      Lizard   > Spock, Paper
      Spock    > Scissors, Rock*/

    cout << "You chose: " << userString << ".\n";
    cout << "The computer chose: " << computerString << ".\n\n";

    if (user == computer) {
        cout << "It's a tie!\n";
    }
    else if (user == scissors && (computer == paper || computer == lizard)) {
        cout << "You win!\n";
    }
    else if (user == paper && (computer == rock || computer == spock)) {
        cout << "You win!\n";
    }
    else if (user == rock && (computer == lizard || computer == scissors)) {
        cout << "You win!\n";
    }
    else if (user == lizard && (computer == spock || computer == paper)) {
        cout << "You win!\n";
    }
    else if (user == spock && (computer == scissors || computer == rock)) {
        cout << "You win!\n";
    }
    else {
        cout << "You lose!\n";
    }
    
}