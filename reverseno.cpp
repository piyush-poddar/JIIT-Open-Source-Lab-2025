#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a 3 digit no.";
    cin >> a;
    int rev = 0;
    for(int i = a; i > 0; i = i / 10)
    {
        rev = rev * 10 + i % 10;
    }
    cout << rev;
    return 0;
}
