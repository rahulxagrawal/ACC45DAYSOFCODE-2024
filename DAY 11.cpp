#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        int minTime = abs(X - Y);
        cout << minTime << endl;
    }
    
    return 0;
}