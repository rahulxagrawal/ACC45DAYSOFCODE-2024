#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int player1Score = 0, player2Score = 0;
    int maxLead = 0, winner = 0;

    for (int i = 0; i < N; ++i) {
        int Si, Ti;
        cin >> Si >> Ti;
        
        player1Score += Si;
        player2Score += Ti;
        
        int currentLead, currentLeader;
        if (player1Score > player2Score) {
            currentLead = player1Score - player2Score;
            currentLeader = 1;
        } else {
            currentLead = player2Score - player1Score;
            currentLeader = 2;
        }
        
        if (currentLead > maxLead) {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }

    cout << winner << " " << maxLead << endl;
    return 0;
}