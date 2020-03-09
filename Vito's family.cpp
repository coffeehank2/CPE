#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int r = 0;
    int s[500] = {0};
    double lives = 0;
    int distance = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> r;
        for (int j = 0; j < r; j++)
        {
            cin >> s[j];
            lives += s[j];
        }

        lives /= r;

        if (lives - (int(lives)) >= 0.5)
            lives = int(lives) + 1;
        else
            lives = int(lives);

        for (int k = 0; k < r; k++)
        {
            distance += abs(int(lives) - s[k]);
        }
        cout << distance;
    }
}