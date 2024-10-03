#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;  
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int scoreAFirst = max(500 - 2 * X, 0) + max(1000 - 4 * (X + Y), 0);
        
        int scoreBFirst = max(1000 - 4 * Y, 0) + max(500 - 2 * (X + Y), 0);

        cout << max(scoreAFirst, scoreBFirst) << endl;
    }

    return 0;
}
