#include <iostream>
using namespace std;

int main() {
    int i, j, h;
    char MW;
    cout << "Please input the height (integer):" << endl;
    cin >> h;
    cout << "Do you want to print M or W?:" << endl;
    cin >> MW;
    if (h <= 1) {
        cout << "Wrong input!" << endl;
    }
    else {
        
        if (MW == 'M') {
            for (i = 1; i <= h; i++) {
                if (i == 1) {
                    for (j = 1; j <= h - 1; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= 2 * h - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= h - 1; j++) {
                        cout << " ";
                    }
                    cout << endl;
                }
                else if (i == h) {
                    cout << "*";
                    for (j = 1; j <= 2 * h - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= 2 * h - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                }
                else {
                    for (j = 1; j <= h - i; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= 2 * i - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= -2 * i + 2 * h - 1; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= 2 * i - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= h - i; j++) {
                        cout << " ";
                    }
                    cout << endl;
                }
            }
        }
        else if (MW == 'W') {
            for (i = 1; i <= h; i++) {
                if (i == 1) {
                    cout << "*";
                    for (j = 1; j <= 2 * h - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= 2 * h - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                }
                else if (i == h) {
                    for (j = 1; j <= h - 1; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= 2 * h - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= h - 1; j++) {
                        cout << " ";
                    }
                    cout << endl;
                }
                else {
                    for (j = 1; j <= i - 1; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= -2 * i + 2 * h - 1; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= 2 * i - 3; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= -2 * i + 2 * h - 1; j++) {
                        cout << " ";
                    }
                    cout << "*";
                    for (j = 1; j <= i - 1; j++) {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
        else {
            cout << "Wrong input!" << endl;
        }

    }

    return 0;
}





