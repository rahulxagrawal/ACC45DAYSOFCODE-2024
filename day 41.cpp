#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int totalBuckets = X / Y;
        int maxPeople = totalBuckets / 2;
        cout << maxPeople << endl;
    }
    return 0;
}