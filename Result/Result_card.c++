#include <iostream>
using namespace std;

int main()
{
  char n[50];
  cout << "Enter your name ";
  cin >> n;

  string a;
  cout << "Enter your Roll No ";
  cin >> a;

  int Eco, Bus, Eng, FA, Math, Com;
  float per;

  cout << "\nEnter the marks of Introduction to Economics ";
  cin >> Eco;
  cout << "Enter the marks of Introduction to Business ";
  cin >> Bus;
  cout << "Enter the marks of English ";
  cin >> Eng;
  cout << "Enter the marks of Financial Accounting ";
  cin >> FA;
  cout << "Enter the marks of Mathematics for Business ";
  cin >> Math;
  cout << "Enter the marks of Introduction to Computing ";
  cin >> Com;

  per = (Eco + Bus + Eng + FA + Math + Com) / 6.0;

  cout << "\nYour name is " << n << endl;
  cout << "Your roll number is " << a << endl;
  cout << "Your percentage is " << per << endl;


// Absolute marking GPA

  float gpa = (per - 50) / 10 + 1;
  if (gpa > 4) {
    gpa = 4;
  }

  cout << "Your GPA is " << gpa << endl;

  return 0;
}
