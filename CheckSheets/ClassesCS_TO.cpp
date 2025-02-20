//Thomas Orozco
#include <iostream>
using namespace std;

class Section{
    private:
    string room;
    string teacher;
    int secNum;

    public:
    Section(){
        room = "BP 118";
        teacher = "Vicki";
        secNum = 601;
    }

    string getRoom(){
        return room;
    }
    string getTeacher(){
        return teacher;
    }
    int getSecNum(){
        return secNum;
    }
};

class Course{
private:
    string courseNum;
    int maxStudents;
    int credits;
    Section sectionInfo;

public:
    //constructors
    Course(){
        courseNum = "XXX-0000";
        maxStudents = 0;
        credits = 0;
        
    };

    Course (string x, int y, int z){
        courseNum = x;
        maxStudents = y;
        credits = z;
    };
    //getters
    string getCourseNum (){
        return courseNum;
    }
    int getMaxStudents(){
        return maxStudents;
    }
    int getCredits(){
        return credits;
    }
    Section getSectionInfo(){
        return sectionInfo;
    }
    //setters
    void setCourseNum(string value){
        courseNum = value;
    }
    void setMaxStudents(int value){
        maxStudents = value;
    }
    void setCredits(int value){
        credits = value;
    }



};

void inputCourse(Course &input){
    string courseNum;
    int maxStudents;
    int credits;
    cout << "Enter Course Number: ";
    cin >> courseNum;
    cout << endl
         << "Enter max students in course: ";
    cin >> maxStudents;
    cout << endl
         << "Enter class credits: ";
    cin >> credits;
    cout << endl;

    input.setCourseNum(courseNum);
    input.setMaxStudents(maxStudents);
    input.setCredits(credits);
}

void printCourse(Course &input){
    cout << "Course Number: " << input.getCourseNum() << endl
         << "Max Students in Course: " << input.getMaxStudents() << endl
         << "Course Credits: " << input.getCredits() << endl
         << endl
         << "Section Info" << endl
         << "Room Number: " << input.getSectionInfo().getRoom() << endl
         << "Teacher: " << input.getSectionInfo().getTeacher() << endl
         << "Section Number: " << input.getSectionInfo().getSecNum() << endl;
}

int main(){
    Course courseOne;

    inputCourse(courseOne);
    printCourse(courseOne);

    Course courseTwo("CSC-2025", 25, 4);
    cout << endl;
    printCourse(courseTwo);

    return 0;
}