#include <iostream>
#include <iomanip>

using namespace std;

struct student
{
    string rollNO;
    string name;
    float per;
};

int main()
{    
    student s;
       
 // Assign values
s.name = "Naveed Tahir";
s.rollNO = "AF22WCT0005";

// Marks of the student
 int eco, bus, eng, fa, math, com;

    eco  = 70;
    bus  = 80;
    eng  = 75;
    fa   = 72;
    math = 80;
    com  = 79;


// Access and display the values
cout << "\nName:- " << s.name << endl;
cout << "Roll NO:- " <<  s.rollNO << endl;

cout << "\nIntroduction to Business: " << bus << endl;
cout << "Introduction to Economics:" << eco << endl;
cout << "Financial Accounting: " << fa << endl;
cout << "English: " << eng << endl;
cout << "Introduction to Computing: " << com << endl;
cout << "Mathematics for Business: " << math << endl;

// Percentage calculation
s.per = (eco + bus + eng + fa + math + com) / 6;

cout << "\nYour percentage is " << s.per << endl;

// Relative marking GPA
double gpa = (s.per - 50) / 10 + 1;
if (gpa > 4) {
    gpa = 4;
}

cout << fixed << setprecision(2);
cout << "\nYour GPA is " << gpa << endl;

return 0;

}
