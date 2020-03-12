#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a)
    {
        if (a != -1)
        {
            cin >> b;
            cout << abs(a - b);
        }
        else
        {
            break;
        }
    }

    return 0;
}
