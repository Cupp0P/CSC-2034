// Thomas Orozco
// Shut the Box IV
// Due: Feb 5, 2025 Done: Feb 7, 2025
// Input files: "shuttheboxinstructions.txt"
// Shut the box game where two dice are rolled and the player is prompted if they want to take the sum or not. Has a ascii display of the boad
//that is updated each turn and a roll counter for game over screen. Has an escape key to end game early.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

void diceRoll(int &rollOne, int &rollTwo);
void displayBoard(char boardStatus[9]);
bool checkGameStatus(char boardStatus[9]);

int main()
{
    int rollOne;
    int rollTwo;
    int rolls = 0;
    char boardStatus[9] = {'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O'}; //tracks which holes are still open
    char input;
    bool gameOver = false; // flag for the game to stop running when set to true
    string line;           // line read from file
    srand(time(0));

    cout << "Do you want to see instructions? y/n ";
    cin >> input;
    // print instructions
    if (input == 'y')
    {
        ifstream inFile("shuttheboxinstructions.txt");
        while (getline(inFile, line))
        {
            cout << line;
        }
    }

    // begin main game loop
    while (gameOver == false)
    {
        diceRoll(rollOne, rollTwo);
        rolls += 1;

        cout << endl
             << endl;
        cout << "Rolls:" << rolls << endl;
        displayBoard(boardStatus);
        cout << "You rolled a " << rollOne << " and a " << rollTwo << endl;
        
        gameOver = checkGameStatus(boardStatus);
        cout << "Do you want to use your sum [" << rollOne + rollTwo << "]? Enter y for yes, q to quit or any other button to continue." << endl;
        cin.sync();
        cin >> input;

        if (input == 'q')
        {
            gameOver = true;
        }

        if (input == 'y' && (rollOne + rollTwo) <= 9)
        {
            rollOne += rollTwo;
            rollTwo = 0; // use rollOne as only roll for when both are added
        }
        else if (input == 'y' && (rollOne + rollTwo) >= 9)
        { // checks for vaild sum
            cout << "Your sum is greater than 9 and cannot but used, proceeding with seperate rolls";
        }

        boardStatus[rollOne - 1] = 'X'; //display board status
        //if they dont take the sum this goes off
        if (rollTwo != 0)
        {
            boardStatus[rollTwo - 1] = 'X';
        }
    }

//ending game over ascii
    cout << endl
         << endl
         << "===============================================" << endl;
    cout << setw(27) << "GAME OVER" << endl;
    cout << setw(23) << "You took " << rolls << " rolls!" << endl;
    cout << "===============================================" << endl;

    return 0;
}

// generates two random numbers from 1 to 6 and returns to pointers.
void diceRoll(int &rollOne, int &rollTwo)
{
    srand(time(0));
    rollOne = (rand() % 6) + 1;
    rollTwo = (rand() % 6) + 1;
}

//displays ascii of the board status O representing an open slot X representing a closed spot
//board status array is passed in to fill Xs and Os
void displayBoard(char boardStatus[9])
{

    cout << "===============================================" << endl;

    cout << '|';
    for (int i = 1; i <= 9; i++)
    {
        cout << '|' << setw(2) << i << setw(2) << '|';
    }
    cout << '|' << endl;

    cout << '|';
    for (int i = 0; i <= 8; i++)
    {
        cout << '|' << setw(2) << boardStatus[i] << setw(2) << '|';
    }
    cout << '|' << endl;
}

//checks if all variables in boardStatus are X and will return true if that is the case
bool checkGameStatus(char boardStatus[9])
{
    for (int i = 0; i < 9; i++)
    {
        if (boardStatus[i] == 'O')
        {
            return false;
        }
    }
    return true;
}

//I dont like how you have to put in one last input before game closes when you win but its the only way the force quit works well.