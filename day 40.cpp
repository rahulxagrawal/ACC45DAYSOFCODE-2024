#include <iostream>
using namespace std;

int main() {
    int X, Y;
    // Read input values
    cin >> X >> Y;

    // Calculate total time spent watching the movie
    int total_time = (Y / 2) + (X - Y);

    // Output the result
    cout << total_time << endl;

    return 0;
}