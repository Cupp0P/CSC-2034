
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char instructions;
    string line;

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