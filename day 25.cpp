#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int maxTastiness = max(a + c, a + d);
        maxTastiness = max(maxTastiness, b + c);
        maxTastiness = max(maxTastiness, b + d);

        cout << maxTastiness << endl;
    }

    return 0;
}