#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter grade: ";
    cin >> grade;

    if (grade >= 75)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    return 0;
}
