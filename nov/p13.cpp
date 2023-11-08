// Write a C++ program that receives the number of students and, for each student, receives the number of courses and their
// respective grades (ranging from 0 to 20). The program should calculate and print the average grade for each student.
#include <iostream>
using namespace std;

int main()
{
    int students;
    cout << "How many students?" << endl;
    cin >> students;
    int num = 0;
    int courses = 0;
    int grades = 0;
    int averages = 0;
    int num2 = 0;
    int sum;
    while (num < students)
    {
        sum = 0;
        courses = 0;
        //grades = 0;
        cout << "How many coures ? " << endl;
        cin >> courses;

        while (num2 < courses)
        {
            cout << "What are the grades ? " << endl;
            cin >> grades;
            sum = sum + grades;
            num2++;
        }
        averages = sum / courses;
        cout << averages << " student average " << endl;
        num++;
    }
}