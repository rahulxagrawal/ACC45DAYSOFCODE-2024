#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;

        // Check if any pair of opposite angles sum to 180
        if ((A + C == 180) || (B + D == 180)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}