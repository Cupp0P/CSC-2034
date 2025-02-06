#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char instructions;
    cout<<"Do you want to see instructions? y/n ";
    cin >> instructions;

    ifstream inFile;
    inFile.open("shuttheboxinstructions.txt");
    if (inFile.fail()){
        cout << "Didn't work";
        exit(-1);
    }


    string line;
    inFile >> line;
    cout << line;

    return 0;
}