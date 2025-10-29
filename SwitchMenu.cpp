#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    cout << "1. Compute Area of Circle" << endl;
    cout << "2. Compute Area of Rectangle" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            double r;
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of Circle: " << (3.1416 * r * r) << endl;
            break;
        }
        case 2: {
            double l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area of Rectangle: " << (l * w) << endl;
            break;
        }
        case 3:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
