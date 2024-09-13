# include <iostream>
int main()
{
    using namespace std;
    // generate random number between 1 and 100
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int guess = -1;
    // guess the number use while loop
    while (guess != number)
    {
        cout << "Please guess a number between 1 and 100: ";
        cin >> guess;
        if (guess > number)
        {
            cout << "Too high!" << endl;
        }
        else if (guess < number)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "You got it!" << endl;
        }
    }
    // // guess the number use do-while loop
    // do
    // {
    //     cout << "Please guess a number between 1 and 100: ";
    //     cin >> guess;
    //     if (guess > number)
    //     {
    //         cout << "Too high!" << endl;
    //     }
    //     else if (guess < number)
    //     {
    //         cout << "Too low!" << endl;
    //     }
    //     else
    //     {
    //         cout << "You got it!" << endl;
    //     }
    // } while (guess != number);
    // // guess number use for loop
    // for (int i = 0; i < 100; i++)
    // {
    //     cout << "Please guess a number between 1 and 100: ";
    //     cin >> guess;
    //     if (guess > number)
    //     {
    //         cout << "Too high!" << endl;
    //     }
    //     else if (guess < number)
    //     {
    //         cout << "Too low!" << endl;
    //     }
    //     else
    //     {
    //         cout << "You got it!" << endl;
    //         break;
    //     }
    // }   
}