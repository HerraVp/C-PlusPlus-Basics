#include "iostream"

using namespace std;

int main() {

    // Guessing Game

    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool outOfGuesses = false;

    while (secretNum != guess && !outOfGuesses) {
        if (guessCount < guessLimit) {
            cout << "Enter a guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You took the L and ran out of guesses.";
    } else {
        cout << "EZ, you won!";
    }

    return 0;
}
