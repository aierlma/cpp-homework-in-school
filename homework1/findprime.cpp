#include <iostream>
int main()
{
    using namespace std;
    // find prime in 1-100 using while loop
    int i = 2;
    while (i <= 100)
    {
        int j = 2;
        while (j < i)
        {
            if (i % j == 0)
                break;
            j++;
        }
        if (j == i)
            cout << i << " is prime" << endl;
        i++;
    }
    // // find prime in 1-100 using do while loop
    // i = 2;
    // do
    // {
    //     int j = 2;
    //     do
    //     {
    //         if (i % j == 0)
    //             break;
    //         j++;
    //     } while (j < i);
    //     if (j == i)
    //         cout << i << " is prime" << endl;
    //     i++;
    // } while (i <= 100);
    // // find prime in 1-100 using for loop
    // for (i = 2; i <= 100; i++)
    // {
    //     int j;
    //     for (j = 2; j < i; j++)
    //     {
    //         if (i % j == 0)
    //             break;
    //     }
    //     if (j == i)
    //         cout << i << " is prime" << endl;
    // }
}