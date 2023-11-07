#include <iostream>
using namespace std;

int TOLA_PRICE_GOLD = 235000;
int TOLA_PRICE_SILVER = 2400;
float ZAKAT_PERCENTAGE = 2.5;
float CASH;

int main() 
{
    float goldAmount;
    float silverAmount;
    float zakatAmountGold;
    float zakatAmountSilver;
    float zakatAmountCash;
    int cashDuration;

    cout << "Enter the weight of gold in tola: ";
    cin >> goldAmount;

    cout << "Enter the weight of silver in tola: ";
    cin >> silverAmount;

    cout << "Enter the amount of Cash in RS: ";
    cin >> CASH;

    cout << "Enter the duration of cash hold (in months): ";
    cin >> cashDuration;

    float goldPrice = goldAmount * TOLA_PRICE_GOLD;
    float silverPrice = silverAmount * TOLA_PRICE_SILVER;

    if (goldAmount <= 7.5) {
        cout << "Zakat is not applicable for gold." << endl;
    } else {
        zakatAmountGold = (goldPrice * ZAKAT_PERCENTAGE) / 100;
        cout << "The Zakat amount on " << goldAmount << " tola gold is: " << zakatAmountGold << " PKR." << endl;
    }

    if (silverAmount <= 52.5) {
        cout << "Zakat is not applicable for silver." << endl;
    } else {
        zakatAmountSilver = (silverPrice * ZAKAT_PERCENTAGE) / 100;
        cout << "The Zakat amount on " << silverAmount << " tola silver is: " << zakatAmountSilver << " PKR." << endl;
    }

    if (cashDuration <= 12) {
        cout << "Zakat is not applicable for  less than 1 year (12 months) Cash." << endl;
    } else {
        zakatAmountCash = (CASH * ZAKAT_PERCENTAGE) / 100;
        cout << "The Zakat amount on cash: " << zakatAmountCash << " PKR." << endl;
    }

    return 0;
}
