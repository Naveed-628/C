#include <iostream>
using namespace std;

int main() 
{
    int rows, N, A, FOR_Space;

   cout << "Enter the number of rows for the diamond: " ;
   cin >> rows;

    // Upper half of the diamond
    FOR_Space = rows - 1;
    for (N = 0; N < rows; N++) 
    
    {
        for (A = 0; A < FOR_Space; A++)
            cout << " ";
        for (A = 0; A <= N; A++)
            cout << "* ";
        cout << endl;
        FOR_Space--;
    }

    // Lower half of the diamond
    FOR_Space = 1;
    for (N = rows - 2; N >= 0; N--) 
 
    {
        for (A = 0; A < FOR_Space; A++)
            cout << " ";
        for (A = 0; A <= N; A++)
            cout << "* ";
        cout << endl;
        FOR_Space++;
    }

    return 0;
}
