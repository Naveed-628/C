#include <iostream>
using namespace std;

int main()
{
    float number_1, number_2, total;
    char operation;

    cout << "Enter the first number: ";
    cin >> number_1;

    cout << "Enter the second number: ";
    cin >> number_2;

    while (true)
    {
        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;

        switch (operation)
        {
            case '+':
                total = number_1 + number_2;
                break;
            case '-':
                total = number_1 - number_2;
                break;
            case '*':
                total = number_1 * number_2;
                break;
            case '/':
                total = number_1 / number_2;
                break;
            default:
                cout << "Invalid operation. Try again." << endl;
                continue;
        }

        break; 
    }

    cout << "Result: " << total << endl;
    
return 0;

}
