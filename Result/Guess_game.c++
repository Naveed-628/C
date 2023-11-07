#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 42;
    int guess;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess the secret number between 1 and 100." << endl;

    int attempts = 0;
    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the secret number " << secretNumber << " in " << attempts << " attempts." << endl;
            break; // Exit the loop if the guess is correct
        }
        else if (guess < secretNumber)
        {
            cout << "Too low. Try again!" << endl;
        }
        else
        {
            cout << "Too high. Try again!" << endl;
        }
    }

    cout << "Thank you for playing the guessing game." << endl;
    return 0;
}
