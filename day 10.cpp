#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        vector<int> weights = {X, Y, Z};
        bool possible = false;

        for (int i = 0; i < 8; ++i) {
            int sum = 0;
            for (int j = 0; j < 3; ++j) {
                if (i & (1 << j)) {
                    sum += weights[j];
                }
            }
            if (sum == W) {
                possible = true;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}