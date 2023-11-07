#include <iostream>
using namespace std;

// Function prototypes 
void celsius_to_fahrenheit();
void fahrenheit_to_celsius();
void grams_into_pound();
void pound_into_gram();
void meter_into_feet();
void feet_into_meter();

int main() 
{
    int choice;

    do {
        cout << "\nChoose a program to run:" << endl;
        cout << "\n1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Grams into Pound" << endl;
        cout << "4. Pound into Gram" << endl;
        cout << "5. Meter into Feet" << endl;
        cout << "6. Feet into Meter" << endl;
        cout << "0. Exit" << endl;
        cout << "\nEnter the Serial no of program you would like to run: ";


        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Goodbye!" << endl;
                break;
            case 1:
                celsius_to_fahrenheit();
                break;
            case 2:
                fahrenheit_to_celsius();
                break;    
            case 3:
                grams_into_pound();
                break;
            case 4:
                pound_into_gram();
                break;
            case 5:
                meter_into_feet();
                break;
            case 6:
                feet_into_meter();
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}

void celsius_to_fahrenheit()
{
    float celsius, fahrenheit;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << "F" << endl;

}

void fahrenheit_to_celsius() 
{
    float fahrenheit, celsius;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32 ) * 5 / 9;
    cout << "Temperature in Celsius: " << celsius << "C" << endl;
}

void grams_into_pound() 
{
    float grams, pounds;
    cout << "Enter the weight in grams: ";
    cin >> grams;
    pounds = grams * 0.002204; 
    cout << "Weight in pounds: " << pounds << " lbs" << endl;
}

void pound_into_gram() 
{
    float pounds, grams;
    cout << "Enter the weight in pounds: ";
    cin >> pounds;
    grams = pounds * 453.59;
    cout << "Weight in grams: " << grams << " g" << endl;
}
void meter_into_feet() 
{
    double meters, feet;
    cout << "Enter the length in meters: ";
    cin >> meters;
    feet = meters * 3.2808;
    cout << "Length in feet: " << feet << " ft" << endl;
}

void feet_into_meter() 
{
    float feet, meters;
    cout << "Enter the length in feet: ";
    cin >> feet;
    meters = feet * 0.3048;
    cout << "Length in meters: " << meters << " m" << endl;
}