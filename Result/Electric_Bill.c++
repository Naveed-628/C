#include <iostream>
using namespace std;

int main()
{
    int units;
    float totalBill = 0.0;

    cout << "Electric Bill Calculator" << endl;
    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        totalBill = units * 10.0;
    }
    else if (units <= 200)
    {
        totalBill = 1000 + (units - 100) * 20.0;
    }
    else if (units <= 300)
    {
        totalBill = 3000 + (units - 200) * 30.0;
    }
    else
    {
        totalBill = 6000 + (units - 300) * 50.0;
    }

    cout << "The total electric bill is: " << totalBill << " PKR" << endl;

    return 0;
}

