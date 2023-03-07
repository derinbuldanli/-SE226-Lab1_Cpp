#include <iostream>
#include <string>
using namespace std;
int main() {
    string student_name;
    out << "Enter your name: ";
    cin >> student_name);
    cout << "Hello " << student_name << endl;

    string student_id;
    cout << "Enter your student id: ";
    cin>> student_id;
    cout << "Your student id is: " << student_id << endl;


    string studentname;
    float labgrade, midtermgrade, finalgrade;
    cout << "Enter student name: ";
    cin>> studentname;
    cout << "Enter lab grade: ";
    cin >> labgrade;
    cout << "Enter midterm grade: ";
    cin >> midtermgrade;
    cout << "Enter final grade: ";
    cin >> finalgrade;
    float lastscore = 0.25 * labgrade + 0.35 * midtermgrade + 0.4 * finalgrade;
    cout << "Name: " << studentname << endl;
    cout << "Lab: " << labgrade << endl;
    cout << "Midterm: " << midtermgrade << endl;
    cout << "Final: " << finalgrade << endl;
    cout << "Last score: " << lastscore << endl;

    cout << " * \n ** \n *** \n ** \n * " << endl;

}
