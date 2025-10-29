#include <iostream>
using namespace std;

int main() {
    int grade, course;
    cout << "Enter grade: ";
    cin >> grade;
    cout << "Enter course code (1-3): ";
    cin >> course;

    if (grade >= 75)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    switch (course) {
        case 1:
            cout << "Course: Programming Fundamentals" << endl;
            break;
        case 2:
            cout << "Course: Data Structures" << endl;
            break;
        case 3:
            cout << "Course: Algorithms" << endl;
            break;
        default:
            cout << "Invalid course code." << endl;
    }

    return 0;
}
