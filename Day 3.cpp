#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int totalHours = (X * 4) + Y;

        cout << totalHours << endl;
    }

    return 0;
}