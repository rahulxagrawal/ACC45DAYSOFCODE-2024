#include <iostream>
using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        long long X, Y; 
        cin >> X >> Y;
        if (X >= Y) {
            cout << 0 << endl; 
        } else {
            long long max_months = (Y - 1) / X; 
            cout << max_months << endl;
        }
    }

    return 0;
}