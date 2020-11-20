//Jonathan Ingram
//Lab 6 - Number guessing game
//CSE-110-114
//10/11/2018


#include <iostream>
#include <cstdlib>

using namespace std;

//Function declaration

string game();


//Main
int main()
{
    bool play = true;
    string again;


    while (play == true)
    {
        again = game();

        if (again == "Y" || again == "y")
        {
            play = true;
        }

        else
        {
            play = false;
        }


    }
        return 0;
        }


string game()
{
    //Variable declarations
    int computerNum, num = 0, guess = 0, tries = 0;
    bool play = true;
    string again;

    computerNum = rand() % 100 + 1;

    cout << "\nThe computer has picked a random number between 0 and 100.\n\n";
    cout << "You have 10 tries to guess the number... good luck!\n\n\n";

    while (guess < 10)
    {

        cout << "Enter a number! ";
        cin >> num;


        if (num == computerNum)
        {
            cout << "You guessed the correct number!\n";
            cout << "You won!\n\n";
            guess = 10;
            tries = 0;
        }

        else if (num > computerNum)
        {
            guess++;
            tries = 10 - guess;
            cout << "Your guess is too high\n";
            cout << "Guess again... you have " << tries << " tries remaining\n\n";
        }

        else if (num < computerNum)
        {
            guess++;
            tries = 10 - guess;
            cout << "Your guess is too low\n\n";
            cout << "Guess again... you have " << tries << " tries remaining\n\n";
        }

        if (guess == 10)
        {
            cout << "You are all out of tries... better luck next time!\n\n";
        }

    if (tries == 0)
    {
        cout << "Would you like to play again? ";
        cin >> again;

    return again;

    }


    }
}




