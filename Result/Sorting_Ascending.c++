#include <iostream>
using namespace std;

int main() 
{
    int numbers, number, unsort, temp_variable;


    cout << "How many numbers do you want: ";
    cin >> numbers;

    int arr[numbers];

    for (number = 0; number < numbers; number++)
    {
        cout << "Enter number " << number + 1 << ": ";
        cin >> arr[number];
    }

    for (number = 0; number < numbers - 1; number++)
    {
        for (unsort = number + 1; unsort < numbers; unsort++)
        {
            if (arr[number] > arr[unsort])  // '<' for Ascending order
            {
                temp_variable = arr[number];
                arr[number] = arr[unsort];
                arr[unsort] = temp_variable;
            }
        }
    }

    cout << "Numbers in ascending order: ";
    for (number = 0; number < numbers; number++)
    {
        cout << arr[number] << " ";
    }

    return 0;
}
