#include <iostream>
#include <iomanip>
using namespace std;

void shopping();
void information();
void offers();

int main()
{
    while (true)
    {
        system("cls");
        cout << endl;
        cout << right << setw(80) << " >> Moon Shopping Mall << " << endl;
        
        cout << endl;


        cout << right << setw(25) << "1. Products Shopping" << right << setw(30) << "2. Information" << right << setw(31) << "3. Offers" << right << setw(35) << "4. Exit" << endl;
        char op;
        cin >> op;
        switch (op)
        {
        case '1':
            shopping();
            break;
        case '2':
            information();
            break;
        case '3':
            offers();
            break;
        case '4':
            cout << "Thanks for visiting. Goodbye!" << endl;
            exit(0);
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    }

    return 0;
}

void shopping()
{
    system("cls");
    cout << endl;

    cout << "Price list --" << endl;
    cout << endl;
    cout << "1. Mango per KG = RS 300" << endl;
    cout << "2. Flour per KG = Rs 150" << endl;
    cout << "3. Onion per KG = Rs 80" << endl;
    cout << "4. Bicycle 1 unit = Rs 15000" << endl;
    cout << "5. Smartphone 1 unit = Rs 40000" << endl;
    cout << "6. Juice per bottle = Rs 200" << endl;
    cout << "7. Earphones = Rs 1200" << endl;

    cout << "\nDelivery charges = Rs 250" << endl;

    cout << "\nNote >> We are offering free delivery over RS 3000" << endl;
    cout << endl;

    int number, n;
    int total = 0;
    const int delivery = 250;
    char op;
    int price[7] = {300, 150, 80, 15000, 40000, 200, 1200};
    cout << endl;

retry:
    cout << "Select Items to add into the cart" << endl;
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Enter the Quantity" << endl;
        cin >> n;
        total += price[0] * n;
        cout << "Mango / Quantity = " << n << " KG" << endl;
        break;

    case 2:
        cout << "Enter the Quantity" << endl;
        cin >> n;
        total += price[1] * n;
        cout << "Flour / Quantity = " << n << " KG" << endl;
        break;

    case 3:
        cout << "Enter the Quantity" << endl;
        cin >> n;
        total += price[2] * n;
        cout << "Onion / Quantity = " << n << " KG" << endl;
        break;

    case 4:
        cout << "Enter the Quantity" << endl;
        cin >> n;
        total += price[3] * n;
        cout << "Bicycle / Quantity = " << n << " of them" << endl;
        break;

    case 5:
        cout << "Enter the Quantity" << endl;
        cin >> n;
        total += price[4] * n;
        cout << "Smartphone / Quantity = " << n << " of them" << endl;
        break;

    case 6:
        cout << "Enter the Quantity" << endl;
        cin >> n;
        total += price[5] * n;
        cout << "Juice / Quantity = " << n << " bottle" << endl;
        break;

    case 7:
        cout << "Enter the Quantity" << endl;
        cin >> n;
        total += price[6] * n;
        cout << "Earphones / Quantity = " << n << " piece" << endl;
        break;
    }

    cout << "Want to purchase anything else?" << endl;
    cout << "1. Yes    2. No" << endl;
    cin >> op;
    if (op == '1')
    {
        goto retry;
    }
    else
    {
        if (total >= 3000)
        {
            cout << "Your Total Bill = " << total << endl;
            cout << "You Got Free Home Delivery" << endl;
        }
        else
        {
            cout << "Your Total bill + Delivery charges = " << total + delivery << endl;
        }
    }

    cout << "Press any key to return to the main menu" << endl;
    cin.ignore();
    cin.get();
}

void information()
{
    system("cls");
    cout << endl;
    cout << right << setw(80) << ">> Information <<" << endl;
    cout << endl;
    cout << "Welcome to our Online Shopping Store!" << endl;
    cout << "Here, you can explore a wide range of products and make hassle-free purchases from the comfort of your home." << endl;
    cout << "To place an order, follow these simple steps:" << endl;
    cout << endl;
    cout << "1. Select the 'Purchase Products' option from the main menu." << endl;
    cout << "2. Browse through the available products and choose the items you wish to purchase by entering the respective numbers." << endl;
    cout << "3. Enter the quantity for each selected item." << endl;
    cout << "4. Review your selected items and quantities to ensure accuracy." << endl;
    cout << "5. Confirm your order and proceed to the checkout process." << endl;
    cout << "6. If your total bill exceeds Rs 3000, you will qualify for free home delivery. Otherwise, a delivery charge of Rs 300 will apply." << endl;
    cout << "7. Once your order is confirmed, you can make the payment using our secure payment options." << endl;
    cout << "8. After successful payment, your order will be processed, and the products will be promptly delivered to your specified address." << endl;
    cout << "9. We strive to provide excellent customer service and ensure your satisfaction with our products." << endl;
    cout << endl;

    cout << "Press any key to return to the main menu" << endl;
    cin.ignore();
    cin.get();
}

void offers()

{
    system("cls");
    cout << endl;
    cout << right << setw(60) << ">> Offers <<" << endl;
    cout << endl;
    cout << "Check out our latest offers and discounts!" << endl;
    cout << "1. Buy 2 Get 1 Free: Purchase any two items and get one item for free." << endl;
    cout << "2. Flat 20% Off: Get a flat 20% discount on all electronic products." << endl;
    cout << "3. Refer and Earn: Refer a friend and earn Rs 100 in store credit." << endl;
    cout << endl;
    cout << "Take advantage of these exciting offers !" << endl;
    cout << endl;

    cout << "Press any key to return to the main menu" << endl;
    cin.ignore();
    cin.get();
}
