#include <iostream>
#include <string>
using namespace std;

class Player{
    protected:
        string name;
        int lifepoints;
        int height;
        int weight;
        int speed;
    public:
        void movement();
        void pick_up();
        int fight();
};

class Wizard : public Player{
    private:
        int magic;
    public:
        void output();
        Wizard();
    };