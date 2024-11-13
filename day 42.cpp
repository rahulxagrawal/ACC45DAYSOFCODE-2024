#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        int min_price = min(A, min(B, C));
        int total_price = A + B + C - min_price;
        cout << total_price << endl;
    }
    return 0;
}