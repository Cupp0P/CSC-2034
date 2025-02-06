#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void integerNumberOutput(int high, int low);

int main() {
int high = 500;
int low = -500;
int spaces;
char input;

cout << "Would you like a table with integers or real numbers? i/r" << endl;
cin >> input;
cout << input;

while(input != 'i' || input != 'r'){
    cin >> input;
}

integerNumberOutput(high, low);


}

//Function that generates table 
void integerNumberOutput(int high, int low){

int randOut;

srand ( time(0));
cout << "500 Random Numbers!" << endl;
cout << "|";

for (int i = 1; i <= 300; i++){
    randOut = (rand() % (high - low + 1) + low);

    cout << ' ' << setw(5)<< left << randOut;
    cout << '|';
    if (i % 15 == 0){
        cout << endl << "|";
    }
}

}