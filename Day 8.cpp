#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int P, Q, R, S;
        cin >> P >> Q >> R >> S;

        int totalProfit = P + Q + R + S;

        if (P > (totalProfit - P) || Q > (totalProfit - Q) || 
            R > (totalProfit - R) || S > (totalProfit - S)) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}