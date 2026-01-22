#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    srand(time(0));
    char playAgain;
    int bestEasy = 100, bestMedium = 100, bestHard = 100;

    do {
        int secretNumbers = rand() % 100 + 1;
        int chances = 0;
        int choice;

        cout << "\nWelcome to the Number Guessing Game!" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;
        
        cout << "\nPlease select the difficulty level:" << endl;
        cout << "1. Easy (10 chances)" << endl;
        cout << "2. Medium (5 chances)" << endl;
        cout << "3. Hard (3 chances)" << endl;
        
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            chances = 10;
            cout << "\nGreat! You have selected the Easy difficulty level." << endl;
        } else if (choice == 2) {
            chances = 5;
            cout << "\nGreat! You have selected the Medium difficulty level." << endl;
        } else if (choice == 3) {
            chances = 3;
            cout << "\nGreat! You have selected the Hard difficulty level." << endl;
        } else {
            chances = 5;
            choice = 2;
        }

        cout << "Let's start the game!\n" << endl;

        auto start = high_resolution_clock::now();
        bool won = false;

        for (int i = 1; i <= chances; i++) {
            int guess;
            cout << "Enter your guess: ";
            cin >> guess;

            if (guess == secretNumbers) {
                auto end = high_resolution_clock::now();
                auto duration = duration_cast<seconds>(end - start);
                
                cout << "Congratulations! You guessed the correct number in " << i << " attempts." << endl;
                cout << "It took you " << duration.count() << " seconds." << endl;

                if (choice == 1 && i < bestEasy) bestEasy = i;
                else if (choice == 2 && i < bestMedium) bestMedium = i;
                else if (choice == 3 && i < bestHard) bestHard = i;
                
                won = true;
                break;
            } else if (guess < secretNumbers) {
                cout << "Incorrect! The number is greater than " << guess << "." << endl;
            } else {
                cout << "Incorrect! The number is less than " << guess << "." << endl;
            }

            if (i == chances / 2) {
                cout << "HINT: The number is " << (secretNumbers % 2 == 0 ? "even" : "odd") << "." << endl;
            }
        }

        if (!won) {
            cout << "\nGame Over! You've run out of chances. The number was " << secretNumbers << "." << endl;
        }

        cout << "\n--- High Scores ---" << endl;
        if (bestEasy != 100) cout << "Easy: " << bestEasy << " attempts" << endl;
        if (bestMedium != 100) cout << "Medium: " << bestMedium << " attempts" << endl;
        if (bestHard != 100) cout << "Hard: " << bestHard << " attempts" << endl;

        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye." << endl;

    return 0;
}