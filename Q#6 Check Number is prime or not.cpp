#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "\n Check whether a number is prime or not = ";
	cin>> num1;	
    for (int a = 1; a <= num1; a++) 
    {
        if (num1 % a == 0) 
        {
            ctr++;
        }
    }
    if (ctr == 2) 
    {
        cout << " \n  The entered number is a prime number. ";
    }
    else {
        cout << "\n  The number you entered is not a prime number. \n";
    }
}
