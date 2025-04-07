#include <iostream>
#include "character.h"
using namespace std;

//makes wizard and then outputs its stats
int main(){
    Wizard myWiz;
    myWiz.output();
}

//Wizard class default constructor
Wizard::Wizard(){
    lifepoints = 5;
    height = 65;
    weight = 40;
    speed = 100;
    magic = rand()% 301 + 400;
}

//Testing Method to output the stats within wizard
void Wizard::output(){
    cout << lifepoints << endl
    << height << endl
    << weight << endl
    << speed << endl 
    << magic;
}