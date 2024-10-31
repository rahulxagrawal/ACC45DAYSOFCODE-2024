
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int P, Q;
        cin >> P >> Q;
        int total_points = P + Q;
        int group = total_points / 4;
        int position = total_points % 4;
        
        if (position == 0 || position == 1) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}