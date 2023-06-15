#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the value of the first number:" << endl;
    cin >> a;
    cout << "Enter the value of the second number:" << endl;
    cin >> b;
    cout << "Enter the value of the third number:" << endl;
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }
}
