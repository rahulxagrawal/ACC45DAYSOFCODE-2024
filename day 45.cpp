#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long coins = (N / 5) * 4 + (N % 5);
        cout << coins << endl;
    }
    return 0;
}