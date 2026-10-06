#include <iostream>

using namespace std;

int main() {
    double y;

    cout << "x\t y\n\n";

    for (double x = 0; x <= 9.0; x += 0.5) {
        if (x <= 3.0) {
            y = -2.0 / 3.0 * x + 2.0;
        }
        else if (x <= 6.0) {
            y = 2.0 / 3.0 * x - 2.0;
        }
        else {
            y = 2.0;
        }

        cout << x << "\t " << y << endl;
    }

    return 0;
}