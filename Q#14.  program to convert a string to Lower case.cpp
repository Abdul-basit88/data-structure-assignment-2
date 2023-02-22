#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "ABDUL BASIT";

    for (size_t i = 0; i < str.length(); ++i) 
	{
        str[i] = tolower(str[i]);
    }

   cout << "Lower case string is: " << str << endl;

    return 0;
}


