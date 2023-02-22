#include<iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "\n Enter Number To Find Its Factorial = ";
    cin >> n;
    for (int b = 1; b <= n; b++) {
        fact = fact * b;
    }
    cout << "\n Factorial of Given Number is = " << fact << endl;

}
