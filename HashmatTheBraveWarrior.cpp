#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;

    while (cin >> a >> b)
    {
        cout << abs(a - b);
    }
    return 0;
}