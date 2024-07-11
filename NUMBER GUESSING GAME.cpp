//                            TASK 1
//                       NUMBER GUESSING GAME


#include <iostream>
#include <cstdlib>
#include <ctime>  // or we can use #inlcude<time.h>

using namespace std;

int main() {
     
  srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = rand() % 101;
    int user_guess = 0;

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    // Loop until the user guesses the correct number
    while (user_guess != random_number) 
    {
        cout << "Enter your guess: ";
        cin >> user_guess;

        if (user_guess < random_number) {
            cout << "Too low! Try again." << endl;
        } else if (user_guess > random_number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    }

    return 0;
}
