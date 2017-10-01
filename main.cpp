// Annie Wong
// CS 110B
// Assignment 5: The League

/*
Requirements
The data must be stored in two parallel arrays: an array of strings named teams, and an array of ints named wins.  These arrays must be declared in the main() function.  You can assume that the league has five teams, so each of the arrays can have five elements.
As usual, you may not use any global arrays or global variables.
All of the user input must be done in a function named initializeArrays.  It must have the following signature:
void initializeArrays(string names[], int wins[], int size)
You must also write two more functions: one to sort both arrays, and one to display the final (sorted) list of team names and scores. They must have the following signatures:
void sortData(string names[], int wins[], int size)
void displayData(string names[], int wins[], int size)
The main function should be very short. It should just declare the arrays and then invoke these three functions.
*/


#include <iostream>
using namespace std;

/* function prototypes */

void initializeArrays(string names[], int wins[], int size);
void sortData(string names[], int wins[], int size);
void displayData(string names[], int wins[], int size);


/* main function */

int main() {

    // declaring constance variable
    const int TEAMSIZE = 5;
    string teamNames[TEAMSIZE] = {};
    int teamWins[TEAMSIZE] = {};

    initializeArrays(teamNames, teamWins, TEAMSIZE);

    return 0;
}


/* function definitions */

void initializeArrays(string names[], int wins[], int size) {

    for (int i = 0; i < size; i++)
    {
        cout << "Enter team #" << i+1 << ": ";
        cin >> names[i];
        cout << "Enter the win for team #" << i+1 << ": ";
        cin >> wins[i];
    }

}

void sortData(string names[], int wins[], int size) {

}

void displayData(string names[], int wins[], int size) {

}