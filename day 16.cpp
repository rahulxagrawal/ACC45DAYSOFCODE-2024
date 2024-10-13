#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int pages = N * 1000;
        int notebooks = pages / 100;
        cout << notebooks << endl;
    }
    return 0;
}