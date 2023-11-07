#include <iostream>
using namespace std;

int main()
{
    int i, num;

    cout << "Enter Positive integer....." << endl;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << "You Entered a Negative number." << endl;
            continue; 
        }

    }

    return 0;
}
