#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& A) {
    int count_1 = count(A.begin(), A.end(), 1);
    int count_neg_1 = A.size() - count_1; // Since A consists only of 1 and -1
    int total = count_1 + count_neg_1;

    if (total % 2 != 0) return -1; // If total number of elements is odd, return -1

    int target = total / 2; // Each should contribute half
    if (count_1 > target) {
        return count_1 - target; // Need to flip some 1s to -1s
    } else {
        return count_neg_1 - target; // Need to flip some -1s to 1s
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        cout << minOperations(A) << endl;
    }
    return 0;
}