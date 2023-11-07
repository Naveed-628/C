#include <iostream>
using namespace std;

const int GOLD_PER_TOLA = 235000;
const float ZAKAT_PER = 2.5;
const int SILVER_PER_TOLA = 2400;


int main()
{
    float goldAmount;
    float silverAmount;
    float ZakatOnGold = 0.0;
    float ZakatOnSilver = 0.0;
    float totalZakat = 0.0;

    int option;

    cout << "Select an option:\n";
    cout << "1. Calculate Zakat for gold\n";
    cout << "2. Calculate Zakat for silver\n";
    cout << "3. Calculate Zakat for both gold and silver\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> option;

    switch (option)
    {
        case 1:
            cout << "Enter the weight of gold in tola: ";
            cin >> goldAmount;

            if (goldAmount <= 7.5)
            {
                cout << "Zakat is not applicable for gold." << endl;
            }
            else
            {
                ZakatOnGold = (goldAmount * GOLD_PER_TOLA * ZAKAT_PER) / 100;
                cout << "The Zakat amount on " << goldAmount << " tola gold is: " << ZakatOnGold << " PKR." << endl;
            }
            break;

        case 2:
            cout << "Enter the weight of silver in tola: ";
            cin >> silverAmount;

            if (silverAmount <= 52.5)
            {
                cout << "Zakat is not applicable for silver." << endl;
            }
            else
            {
                ZakatOnSilver = (silverAmount * SILVER_PER_TOLA * ZAKAT_PER) / 100;
                cout << "The Zakat amount on " << silverAmount << " tola silver is: " << ZakatOnSilver << " PKR." << endl;
            }
            break;

        case 3:
            cout << "Enter the weight of gold in tola: ";
            cin >> goldAmount;

            if (goldAmount <= 7.5)
            {
                cout << "Zakat is not applicable for gold." << endl;
            }
            else
            {
                ZakatOnGold = (goldAmount * GOLD_PER_TOLA * ZAKAT_PER) / 100;
                cout << "The Zakat amount on " << goldAmount << " tola gold is: " << ZakatOnGold << " PKR." << endl;
            }

            cout << "Enter the weight of silver in tola: ";
            cin >> silverAmount;

            if (silverAmount <= 52.5)
            {
                cout << "Zakat is not applicable for silver." << endl;
            }
            else
            {
                ZakatOnSilver = (silverAmount * SILVER_PER_TOLA * ZAKAT_PER) / 100;
                cout << "The Zakat amount on " << silverAmount << " tola silver is: " << ZakatOnSilver << " PKR." << endl;
            }

            totalZakat = ZakatOnGold + ZakatOnSilver;
            cout << "The total of Zakat amount is: " << totalZakat << " PKR." << endl;
            break;

        default:
            cout << "Invalid option selected." << endl;
            break;
    }

    return 0;
}
