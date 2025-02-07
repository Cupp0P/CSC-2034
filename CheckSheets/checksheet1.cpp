//Thomas Orozco
//Formating Output Checksheet
//Due Feb 5, 2025
//Following the checksheet list to output a table of 300 random numbers that can be both integers and real numbers
//that are then output into a neatly organzied table

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//Declarations
void integerNumberOutput(int highLimit, int lowLimit);
void realNumberOutput(int highLimit, int lowLimit);

//Main
int main() {
int highLimit = 500;
int lowLimit = -500;
char input;

cout << "Press r if you want your table to use real numbers instead of integers otherwise press any key and then enter." << endl;
cin >> input;

if(input == 'r'){
    realNumberOutput(highLimit, lowLimit);
} else{
    integerNumberOutput(highLimit, lowLimit);
}

}

//Function that generates integer table input the high limit and low limit of the numbers and will output 300
//randomized integers in an organized table 
void integerNumberOutput(int highLimit, int lowLimit){

int randOut; //final number to output

srand ( time(0));
cout << "500 Random Integers!" << endl;
cout << "|";

for (int i = 1; i <= 300; i++){ //start i at 1 so that the spacing will be correctly aligned by dividing by 15
    randOut = (rand() % (highLimit - lowLimit + 1) + lowLimit);

    cout << ' ' << setw(4)<< right << randOut;
    cout << " |";
    if (i % 15 == 0 && i != 300){
        cout << endl << "|";
    }
    }
}

//Function that generates real number table input the high limit and low limit of the numbers and will output 300
//randomized real numbers in an organized table 
void realNumberOutput(int highLimit, int lowLimit){
int iPart; //integer that makes up the whole part of the number
float rPart; //real number that makes up the decimal of the number
float randOut; //final output

srand ( time(0));
cout << "500 Random Real Numbers!" << endl;
cout << "|";

for (int i = 1; i <= 300; i++){
    iPart = (rand() % (highLimit - lowLimit + 1) + lowLimit); 
    rPart = (rand() % (highLimit - lowLimit + 1) + lowLimit);
    randOut = iPart + (rPart / 1000); 

    cout << ' ' << setw(8)<< right << randOut;
    cout << " |";
    if (i % 15 == 0 && i != 300){
        cout << endl << "|";
    }
    }
}
//no known problems