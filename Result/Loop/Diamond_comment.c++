#include <iostream>
using namespace std;

int main()
{
    int rows, N, A, FOR_Space;

    cout << "Enter the number of rows for the diamond: ";
    cin >> rows;

    // Upper half of the diamond

    FOR_Space = rows - 1; // For number of spaces before each row
    for (N = 0; N < rows; N++) 
    
    {
        // Loop for printing the spaces before the numbers
        for (A = 0; A < FOR_Space; A++)
            cout << " ";
        
        // Loop for printing the numbers in each row
        for (A = 0; A <= N; A++)
            cout << A + 1 << " ";
        
        cout << endl;
        FOR_Space--; // Decrement operator for decrease the number of spaces for the next row
    }

    // Lower half of the diamond

    FOR_Space = 1; // Reset the number of spaces for the lower half
    for (N = rows - 2; N >= 0; N--) 
    
    {
        // Loop for printing the spaces before the numbers
        for (A = 0; A < FOR_Space; A++)
            cout << " ";
        
        // Loop for printing the numbers in each row
        for (A = 0; A <= N; A++)
            cout << A + 1 << " ";
        
        cout << endl;
        FOR_Space++; // Increment operator increase the number of spaces for the next row
    }

    return 0;
}
