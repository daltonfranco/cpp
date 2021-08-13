#include <iostream>

using namespace std;

int main(){
    float grade1, grade2, grade3, studentAverage, averageClass;

    cout << "Enter your first grade: ";
    cin >> grade1;

    cout << "Enter your second grade: ";
    cin >> grade2;

    cout << "Enter your third grade: ";
    cin >> grade3;

    studentAverage = (grade1 + grade2 + grade3)/3;

    cout << "Enter the class room average: : ";
    cin >> averageClass;

    if (studentAverage < averageClass){
        cout << "The student is below average" << endl;
    }else if (studentAverage == averageClass){
        cout << "The student is in average" << endl;
    }else{
        cout << "The student is above average" << endl;
    }
}