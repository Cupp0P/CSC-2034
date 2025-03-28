//Thomas Orozco
//RPG Character Creator
//DUE: 2/19/2025
//FILE IN: RPGChars.txt
//Reading character data for an rpg from a txt file and outputting it.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string name;
    string ancestry;
    string vecItem; //used to read items one by one before they are put into vector
    vector <string> items;
    vector <string> skills;

    ifstream readChar("RPGChars.txt");

    //read character by character till a : is hit to signal next data point
    //Name
    char letter;
    while(letter != ':'){
        name += letter;
        readChar.get(letter);
    }

    //Ancestry
    //Could prob use getLine instead of get
    readChar.get(letter);

    while(letter != ':'){
        ancestry += letter;
        readChar.get(letter);
    }

    readChar.get(letter);

    //reads characters and puts them into vecItem until a , is hit then pushes vecItem to the vector and clears vecItem
    //Items
    while(letter != ':'){
        vecItem += letter;
        readChar.get(letter);

        if(letter == ','){
            items.push_back(vecItem);
            vecItem = "";
            readChar.get(letter);
        }
    }

    readChar.get(letter);

    //Skills
    while(letter != ':'){
        vecItem += letter;
        readChar.get(letter);

        if(letter == ','){
            skills.push_back(vecItem);
            vecItem = "";
            readChar.get(letter);
        }
    }

    //Output
    cout << "Name: " << name << endl;
    cout << "Ancestry: " << ancestry << endl;

    cout << "Items: ";
    for(int i = 0; i < items.size(); i++){
        cout << items[i] << ", ";
    }
    cout << endl
        << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << ", ";
    }
    cout << endl << endl;

    // Could probably use some functions instead of repeating the entire section over but I am very tired and almost out of time
    readChar.get(letter);
    readChar.get(letter);

    //Clear variables
    name = "";
    ancestry = "";
    items.clear();
    skills.clear();

    //name
    while(letter != ':'){
        name += letter;
        readChar.get(letter);
    }

    readChar.get(letter);
    //ancestry
    while(letter != ':'){
        ancestry += letter;
        readChar.get(letter);
    }

    readChar.get(letter);
    //items
    while(letter != ':'){
        vecItem += letter;
        readChar.get(letter);

        if(letter == ','){
            items.push_back(vecItem);
            vecItem = "";
            readChar.get(letter);
        }
    }

    readChar.get(letter);
    //skills
    while(letter != ':'){
        vecItem += letter;
        readChar.get(letter);

        if(letter == ','){
            skills.push_back(vecItem);
            vecItem = "";
            readChar.get(letter);
        }
    }

    //output
    cout << "Name: " << name << endl;
    cout << "Ancestry: " << ancestry << endl;

    cout << "Items: ";
    for(int i = 0; i < items.size(); i++){
        cout << items[i] << ", ";
    }
    cout << endl
        << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << ", ";
    }
    cout << endl << endl;


    int str = 10;
    int bigger = 10;
    

    cout << endl << str;

    return 0;

    


}\
//PROBLEMS:
//For one thing this is a pretty messy way to do it. The second characters output for the vectors is all out of sorts. Could almost certainly make this much
//neater and more efficient.