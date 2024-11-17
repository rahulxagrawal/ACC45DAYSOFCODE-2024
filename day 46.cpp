#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y, R;
        cin >> X >> Y >> R;

        int extraSticks = R / 30;
        int totalSticks = X + extraSticks;

        int maxPlates = totalSticks / Y;
        if (totalSticks % Y != 0) {
            maxPlates++;
        }

        cout << maxPlates << endl;
    }
    
    return 0;
}