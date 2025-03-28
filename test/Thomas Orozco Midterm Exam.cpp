//Thomas Orozco
//Midterm Exam
//Done on March 28, 2025
//No outstanding problems
#include <iostream>
#include <vector>
using namespace std;

//A class consisting of two integers, x and y meant to represent a point on a graph
class Point{
    private:
        int x;
        int y;
    
    public:

    Point(){
        x = 0;
        y = 0;
    }

    Point(int inX, int inY){
        x = inX;
        y = inY;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }
};

//Class consisting of two Points meant to represent a vector between two points on a graph
class Line{
    private:
        Point pointOne;
        Point pointTwo;

    public:

    Line(){
        pointOne = Point();
        pointTwo = Point();
    }

    Line(Point inPointOne, Point inPointTwo){
        pointOne = inPointOne;
        pointTwo = inPointTwo;
    }

    Point getPointOne(){
        return pointOne;
    }

    Point getPointTwo(){
        return pointTwo;
    }
};

//Adds the x and y values of two point classes and returns a new point with those values
Point sumPoints(Point pointOne, Point pointTwo);

int main(){
    Point myPointOne(2, 4);
    Point myPointTwo(3, 6);

   Point bigPoint = sumPoints(myPointOne, myPointTwo);
   
   //An array of Point
   vector<Point> points;

   Line myLine(myPointOne, myPointTwo);

   cout << "Point One Coordinates: " << myLine.getPointOne().getX() << ',' << myLine.getPointOne().getY() << endl
    << "Point Two Coordinates: " << myLine.getPointTwo().getX() << ','<< myLine.getPointTwo().getY() << endl;


    return 0;
}

Point sumPoints(Point pointOne, Point pointTwo){
    int sumX = pointOne.getX() + pointTwo.getX();
    int sumY = pointOne.getY() + pointTwo.getY();

    Point sumPoint(sumX, sumY);

    return sumPoint;
}