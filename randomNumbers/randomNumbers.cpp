#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int low = 30;
    int high = 100;
    srand(0);
    srand ( (unsigned int) time(NULL));

    int randomValue = rand();
    int randomValue2 = rand() % (high - low +1) + low;
    

}