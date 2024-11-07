#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int tuesdays = (N >= 2) ? (N - 2) / 7 + 1 : 0;
        cout << tuesdays << endl;
    }
    return 0;
}
