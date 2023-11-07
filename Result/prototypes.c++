#include <iostream>
using namespace std;

// Function prototypes 
void Arithmeticoperations();
void resultCalculator();
void electricBillCalculator();
void breakStatement();
void zakatCalculator();
void diamondShape();

int main() 
{
    int choice;

    do {
        cout << "\nChoose a program to run:" << endl;
        cout << "\n1. Arithmetic Operations" << endl;
        cout << "2. Result Calculator" << endl;
        cout << "3. Electric Bill Calculator" << endl;
        cout << "4. Break Statement" << endl;
        cout << "5. Zakat Calculator" << endl;
        cout << "0. Exit" << endl;
        cout << "\nEnter the Serial no of program you would like to run: ";


        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Goodbye!" << endl;
                break;
            case 1:
                Arithmeticoperations();
                break;
            case 2:
                resultCalculator();
                break;    
            case 3:
                electricBillCalculator();
                break;
            case 4:
                breakStatement();
                break;
            case 5:
                zakatCalculator();
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}

void Arithmeticoperations()
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

}

void resultCalculator() 
{
    char n[50];
    cout << "Enter your name: ";
    cin >> n;

    string a;
    cout << "Enter your Roll No: ";
    cin >> a;

    int Eco, Bus, Eng, FA, Math, Com;
    float per;

    cout << "\nEnter the marks of Introduction to Economics: ";
    cin >> Eco;
    cout << "Enter the marks of Introduction to Business: ";
    cin >> Bus;
    cout << "Enter the marks of English: ";
    cin >> Eng;
    cout << "Enter the marks of Financial Accounting: ";
    cin >> FA;
    cout << "Enter the marks of Mathematics for Business: ";
    cin >> Math;
    cout << "Enter the marks of Introduction to Computing: ";
    cin >> Com;

    per = (Eco + Bus + Eng + FA + Math + Com) / 6.0;

    cout << "\nYour name is " << n << endl;
    cout << "Your roll number is " << a << endl;
    cout << "Your percentage is " << per << endl;

    // GPA
    float gpa = (per - 50) / 10 + 1;
    if (gpa > 4) 
    {
        gpa = 4;
    }
    else if ( gpa < 1 )
    {
        cout << "You are Fail" << endl;
    }


    cout << "Your GPA is " << gpa << endl;
}

void electricBillCalculator() 
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
}

void breakStatement() {
    int i, num;
    int sum = 0;

    cout << "Enter Positive integer....." << endl;
    
    for (i = 0; i < 10; i++) {     
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0) {
            cout << "You Entered a Negative number." << endl;
            break;
        }
    
        sum += num;
    }

    cout << "Sum of entered numbers is: " << sum << endl;
}

void zakatCalculator() 
{
    int TOLA_PRICE_GOLD = 235000;
    int TOLA_PRICE_SILVER = 2400;
    float ZAKAT_PERCENTAGE = 2.5;
    float CASH;

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

    cout << "Total Amount: " << zakatAmountCash +  zakatAmountSilver + zakatAmountGold << "PKR" << endl;
}