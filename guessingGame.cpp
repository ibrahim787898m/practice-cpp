#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "--------------------------------" << endl;
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;
    cout << "--------------------------------" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
            cout << "--------------------------------" << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
            cout << "--------------------------------" << endl;
        } else {
            cout << "--------------------------------" << endl;
            cout << "Congratulations! You've guessed the number " << secretNumber << " in " << tries << " tries!" << endl;

            if (tries == 1) {
                cout << "Wow! You are a mind reader!" << endl;
            } else if (tries <= 3) {
                cout << "Great job! You're really good at this!" << endl;
            } else if (tries <= 5) {
                cout << "Not bad! You got it in a reasonable number of tries." << endl;
            } else {
                cout << "Good effort! It took you a few tries, but you got there!" << endl;
            }
            cout << "--------------------------------" << endl;
            break;

            cout << "Would you like to play again? (y/n): ";
            char playAgain;
            cin >> playAgain;
            if (playAgain == 'y' || playAgain == 'Y') {
                secretNumber = rand() % 100 + 1; // Reset the secret number
                tries = 0; // Reset the number of tries
                cout << "Let's play again!" << endl;
            } else {
                cout << "Thanks for playing! Goodbye!" << endl;
                cout << "--------------------------------" << endl;
                break;
            }
        }
    } while (guess != secretNumber);

    return 0;
}

// The code above implements a simple guessing game in C++ where the user tries to guess a randomly generated number between 1 and 100. The game provides feedback on whether the guess is too high or too low, and it tracks the number of attempts made by the user. After guessing correctly, it offers a message based on the number of tries taken and asks if the user wants to play again.