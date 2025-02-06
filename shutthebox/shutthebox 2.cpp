//Thomas Orozco
//Shut the Box I
//Due: Feb 5, 2025 Done: Feb 5, 2025
//Input files: "shuttheboxinstructions.txt"
//First part of shut the box to prompt user if they want instructions and if yes print from the supplied .txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void diceRoll (int &rollOne, int &rollTwo);

int main(){
    int rollOne;
    int rollTwo;
    char input; //input from user if they want instructions
    string line; //line read from file
    srand (time(0));

    cout<<"Do you want to see instructions? y/n ";
    cin >> input;

    if(input == 'y'){
        ifstream inFile("shuttheboxinstructions.txt");
        while(getline(inFile, line)){
            cout << line;
        }
    }

    diceRoll(rollOne, rollTwo);

    cout << "You rolled a " << rollOne <<" and a " << rollTwo << endl;;
    cout << "Do you want to use your sum [" << rollOne + rollTwo << "]? Enter y if yes." << endl;
    input = NULL;
    
  

    return 0;
}

void diceRoll( int &rollOne, int &rollTwo){
    srand (time(0));
    rollOne = (rand() % 6) + 1;
    rollTwo = (rand() % 6) + 1;
}

//no problems