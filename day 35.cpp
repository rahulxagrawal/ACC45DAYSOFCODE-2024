#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, A, B;
        cin >> X >> A >> B;
        int score = A + 2 * B;
        if (score >= X) {
            cout << "Qualify" << endl;
        } else {
            cout << "NotQualify" << endl;
        }
    }
    return 0;
}