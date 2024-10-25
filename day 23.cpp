#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<string> contestCodes(N);
        int countSTART38 = 0, countLTIME108 = 0;

        for (int i = 0; i < N; ++i) {
            cin >> contestCodes[i];
            if (contestCodes[i] == "START38") {
                countSTART38++;
            } else if (contestCodes[i] == "LTIME108") {
                countLTIME108++;
            }
        }
        
        cout << countSTART38 << " " << countLTIME108 << endl;
    }
    return 0;
}