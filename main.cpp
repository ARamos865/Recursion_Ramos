#include <iostream>
#include <string>

using namespace std;

void towerOfHanoi (int n, char fRod, char tRod, char Rod)
{
  
  string diskColor = "\x1b[31;1m";
  string rodColor = "\x1b[32;1m";
  string reset = "\x1b[0m";
  if (n > 0)
  {
  towerOfHanoi(n - 1, fRod, Rod, tRod);
  cout << "\nMove disk " << diskColor << n << reset << " from rod " << rodColor << fRod << reset << " to rod " << rodColor << tRod << reset << endl;
  towerOfHanoi(n - 1, Rod, tRod, fRod);
  }
}

int fact(int n)
{
  if(n == 0)
  
    return 1;
    
  else
  
    return n*fact(n - 1);
}

int main() 
{
 
 string fColor = "\x1b[34;1m"; 
 string reset = "\x1b[0m";
 int n;
 
 cout << "Please enter a number of disks: ";
 cin >> n;
 
 towerOfHanoi(n, 'A', 'B', 'C');
 
 cout << "\nAll the disks are moved." << endl;
 
 cout << "\nThe factorial for the amount of disks you entered is: ";
 
 cout << fColor << fact(n) << reset << endl;
 
 return 0;
}