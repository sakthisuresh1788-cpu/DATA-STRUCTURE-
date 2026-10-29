#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollno, m1, m2, m3, total;
    float average;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollno;

    cout << "Enter 3 Subject Marks: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    average = total / 3.0;

    cout << "\n----- STUDENT MARK LIST -----\n";
    cout << "Student Name: " << name << endl;
    cout << "Roll Number: " << rollno << endl;
    cout << "Subject 1: " << m1 << endl;
    cout << "Subject 2: " << m2 << endl;
    cout << "Subject 3: " << m3 << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average: " << average << endl;

    if (m1 >= 35 && m2 >= 35 && m3 >= 35)
    {
        cout << "Result: PASS" << endl;

        if (average >= 90)
            cout << "Grade: A+" << endl;
        else if (average >= 80)
            cout << "Grade: A" << endl;
        else if (average >= 70)
            cout << "Grade: B" << endl;
        else if (average >= 60)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Result: FAIL" << endl;
        cout << "Grade: F" << endl;
    }

    return 0;
}