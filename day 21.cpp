#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        // First, check if using the special attack is beneficial
        int attacksWithSpecial = 1 + ceil((H - Y) / (double)X);
        int attacksWithoutSpecial = ceil(H / (double)X);

        // Minimum of both strategies
        int minAttacks = min(attacksWithSpecial, attacksWithoutSpecial);
        cout << minAttacks << endl;
    }
    return 0;
}