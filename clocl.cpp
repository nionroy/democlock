#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int h, m, s, a, err;
    err = a = 0;

    while (err == 0) {
        cout << "Enter hour:" << endl;
        cin >> h;
        cout << "Enter min:" << endl;
        cin >> m;
        cout << "Enter the second:" << endl;
        cin >> s;

        if (h < 24 && m < 60 && s < 60) {
            err++;
        } else {
            system("cls");
        }
    }

    while (a == 0) {
        system("cls");
        cout << h << ":" << m << ":" << s << endl;
        Sleep(1000); // Use Sleep instead of sleep for Windows
        s++;

        if (s > 59) {
            s = 0;
            m++;

            if (m > 59) {
                m = 0;
                h++;

                if (h > 23) { // Change to 23 since hours are from 0 to 23
                    h = 0;
                }
            }
        }
    }

    return 0;
}
