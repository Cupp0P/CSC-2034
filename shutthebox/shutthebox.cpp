//Thomas Orozco
//Shut the Box I
//Due: Jan 24, 2025 Done: Feb 3, 2025
//Input files: "shuttheboxinstructions.txt"
//First part of shut the box to prompt user if they want instructions and if yes print from the supplied .txt
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char instructions; //input from user if they want instructions
    string line; //line read from file

    cout<<"Do you want to see instructions? y/n ";
    cin >> instructions;

    if(instructions == 'y'){
        ifstream inFile("shuttheboxinstructions.txt");
        while(getline(inFile, line)){
            cout << line;
        }
    }

    return 0;
}
//no problems