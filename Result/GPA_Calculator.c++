#include <iostream>
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
       
        cout <<"\nEnter your name ";
        cin >>s.name;

       
        cout <<"Enter your Roll No ";
        cin >>s.rollNO;
    

int Eco, Bus, Eng, FA, Math, Com;

cout<< "\nEnter the marks of Introduction to Economics ";
cin>> Eco;
cout<< "Enter the marks of Introduction to Business ";
cin>> Bus;
cout<< "Enter the marks of English ";
cin>> Eng;
cout<< "Enter the marks of Financial Accounting ";
cin>> FA;
cout<< "Enter the marks of Mathematics for Business ";
cin>> Math;
cout<< "Enter the marks of Introduction to Computing ";
cin>> Com;

s.per = (Eco + Bus + Eng + FA + Math + Com) / 6.0;

cout << "\nYour name is " << s.name << endl;
cout << "Your Roll NO is " << s.rollNO << endl;
cout << "Your percentage is " << s.per << endl;

// Absolute marking GPA
float gpa = s.per / 100 * 4;

cout << "\nYour GPA is " << gpa << endl;

return 0;
}