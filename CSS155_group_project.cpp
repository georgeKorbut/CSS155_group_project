//Group Project

//Ethan Shin, George Korbut, Gregory Tilearcio

//Option 1: Student Grade Manger 

#include <iostream>;
#include <fstream>;
#include <sstream>;
#include <string>;
using namespace std;

char letterGrade(float);

int main(){

    string studentName;
    int grade1;
    int grade2;
    int grade3;
    int grade4;
    int grade5;

    float gradeAverage;

    ifstream inFile;
    inFile.open(grade_input_file.dat);

    if (!inFile){
        cout << "Error opening file";
        return 0;
    }





    inFile.close();
}

char letterGrade(float average){
    if (average >= 90){
        return 'A';
    } else if (average >= 80 && average < 90){
        return 'B';
    } else if (average >= 70 && average < 80){
        return 'C';
    } else if (average >= 60 && average < 70){
        return 'D';
    } else {
        return 'F';
    }
}
