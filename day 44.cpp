#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        int totalDuration = (N / 2) * A + (N - N / 2) * B;
        cout << totalDuration << endl;
    }
    return 0;
}
