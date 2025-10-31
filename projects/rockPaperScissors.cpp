#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char userChoice(char player);
char computerChoice(char computer);
void displayChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;
    bool playing = true;
    while(playing) {
        cout << "----------------------------------" << endl;
        cout << "Welcome to Rock, Paper, Scissors Game!" << endl;
        cout << "----------------------------------" << endl;
        player = userChoice(player);
        cout << "-----------------------------------" << endl;
        cout << "Your Choice: ";
        displayChoice(player);
        cout << "-----------------------------------" << endl;
        if (player == 'q') {
            bool playing = false;
            cout << "Thanks for playing!" << endl;
            cout << "------------------------------------" << endl;
            break;
        }
        computer = computerChoice(computer);
        cout << "Computer's Choice: ";
        displayChoice(computer);
        cout << "-----------------------------------" << endl;
        chooseWinner(player, computer);
    }
}

char userChoice(char player) {
    do {
        cout << "Enter r for Rock." << endl;
        cout << "Enter p for Paper." << endl;
        cout << "Enter s for Scissors." << endl;
        cout << "Enter q to quit." << endl;
        cout << "--------------------------------" << endl;
        cout << "Your choice: ";
        cin >> player;

    } while (player != 'r' && player != 'p' && player != 's' && player != 'q');
    return player;
}

char computerChoice(char computer) {
    srand(time(0));
    int num = rand() % 3;
    switch (num) {
        case 1:
        return 'r'; // Rock
        case 2:
        return 'p'; // Paper
        case 3:
        return 's'; // Scissors
    }
    return computer; // Default case, should not happen
}

void displayChoice(char choice) {
    switch (choice) {
        case 'r':
            cout << "Rock" << endl;
            break;
        case 'p':
            cout << "Paper" << endl;
            break;
        case 's':
            cout << "Scissors" << endl;
            break;
        case 'q':
            cout << "Quit" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

void chooseWinner(char player, char computer) {
    switch (player) {
        case 'r':
            if (computer == 's') {
                cout << "You win! Rock crushes Scissors." << endl;
            } else if (computer == 'p') {
                cout << "You lose! Paper covers Rock." << endl;
            } else {
                cout << "It's a tie! Both chose Rock." << endl;
            }
            break;
        case 'p':
            if (computer == 'r') {
                cout << "You win! Paper covers Rock." << endl;
            } else if (computer == 's') {
                cout << "You lose! Scissors cut Paper." << endl;
            } else {
                cout << "It's a tie! Both chose Paper." << endl;
            }
            break;
        case 's':
            if (computer == 'p') {
                cout << "You win! Scissors cut Paper." << endl;
            } else if (computer == 'r') {
                cout << "You lose! Rock crushes Scissors." << endl;
            } else {
                cout << "It's a tie! Both chose Scissors." << endl;
            }
            break;
        case 'q':
            cout << "Game over!" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}

// End of the Rock, Paper, Scissors game implementation
// This code implements a simple console-based Rock, Paper, Scissors game in C++.
// The game allows a user to play against the computer, with options to choose Rock, Paper, or Scissors,
// and displays the winner based on the choices made. The game continues until the user decides to
// quit by entering 'q'. The computer's choice is randomly generated, and the game logic determines the outcome based on standard rules of Rock, Paper, Scissors.
// The code is structured to be easy to read and maintain, with functions for user input, computer choice generation, choice display, and winner determination.
// The game uses the C++17 standard for compatibility and modern features.