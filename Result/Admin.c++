#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Username = 001;
    int Password = 100;

    int user, pass;

    cout << "\nWelcome to the Admin Panel!" << endl;

    while (true)
    {
        cout << "Enter your Username: ";
        cin >> user;

        cout << "Enter your Password: ";
        cin >> pass;

        if (user == Username && pass == Password)
        {
            cout << "\nWelcome to the dashboard! " << endl;
            break;
        }
        else
        {
            cout << "Invalid Username or Password." << endl;
        }
    }

    cout << right << setw(45) << "Dashboard." << endl;
    cout <<"\nusername"<< right << setw(45) << "password"<< right << setw(45)<< "Time Table\n"<< endl;

    return 0;
}
