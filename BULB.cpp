#include <iostream>
using namespace std;

int main() {
    int button;

    cout << "Enter switch state (1 = ON, 0 = OFF): ";
    cin >> button;

    if (button == 1) {
        cout << "Bulb ON" << endl;
    } else {
        cout << "Bulb OFF" << endl;
    }

    return 0;
}