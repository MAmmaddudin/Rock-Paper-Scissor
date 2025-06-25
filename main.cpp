#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

void clearInputBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed RNG once

    int leaderboard[3] = {0, 0, 0};  // Top 3 player scores
    string moves[] = {"rock", "paper", "scissors"};

    while (true) {
        int playerWins = 0, computerWins = 0, draws = 0, roundsPlayed = 0;
        bool isPaused = false;
        string input;

        cout << "\n======= ROCK PAPER SCISSORS =======\n";
        cout << "Controls:\n";
        cout << " - 'r' = Rock\n - 'p' = Paper\n - 's' = Scissors\n";
        cout << " - 'pause' to pause\n - 'resume' to continue\n - 'quit' to end\n";

        while (roundsPlayed < 10) {
            if (!isPaused) {
                cout << "\nYour move (r/p/s): ";
                getline(cin, input);  // Safer input method

                if (input == "pause") {
                    isPaused = true;
                    cout << "[Game paused. Type 'resume' to continue.]\n";
                    continue;
                } 
                else if (input == "quit") {
                    cout << "Game ended by player.\n";
                    break;
                }
                else if (input != "r" && input != "p" && input != "s") {
                    cout << "? Invalid input. Try again.\n";
                    continue;
                }

                // Convert input to move
                string playerMove = (input == "r") ? "rock" :
                                   (input == "p") ? "paper" : "scissors";

                string computerMove = moves[rand() % 3];

                cout << "You chose: " << playerMove << endl;
                cout << "Computer chose: " << computerMove << endl;

                if (playerMove == computerMove) {
                    cout << "?? It's a draw!\n";
                    draws++;
                } 
                else if ((playerMove == "rock" && computerMove == "scissors") ||
                        (playerMove == "paper" && computerMove == "rock") ||
                        (playerMove == "scissors" && computerMove == "paper")) {
                    cout << "? You win this round!\n";
                    playerWins++;
                } 
                else {
                    cout << "? Computer wins this round!\n";
                    computerWins++;
                }

                roundsPlayed++;
            } 
            else {
                cout << "[PAUSED] Type 'resume' to continue: ";
                getline(cin, input);
                if (input == "resume") {
                    isPaused = false;
                }
                else if (input == "quit") {
                    cout << "Game ended by player.\n";
                    break;
                }
            }
        }

        // Game over summary
        cout << "\n====== GAME OVER ======\n";
        cout << "Rounds Played: " << roundsPlayed << endl;
        cout << "? Your Wins: " << playerWins << endl;
        cout << "? Computer Wins: " << computerWins << endl;
        cout << "?? Draws: " << draws << endl;

        // Update leaderboard
        if (playerWins > leaderboard[2]) {
            leaderboard[2] = playerWins;
            sort(leaderboard, leaderboard + 3, greater<int>());
        }

        cout << "\n?? Leaderboard (Top 3 Player Scores):\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". Wins: " << leaderboard[i] << endl;
        }

        // Ask to restart
        string choice;
        cout << "\nType 'restart' to play again or 'exit' to quit: ";
        getline(cin, choice);
        if (choice != "restart") {
            cout << "Thanks for playing!\n";
            break;
        }
    }

    return 0;
}
