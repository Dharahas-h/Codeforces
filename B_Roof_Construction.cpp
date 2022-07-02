#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nftc;
    cin >> nftc;

    while (nftc)
    {
        nftc--;
        int n;
        cin >> n;
        int p = log2(n - 1);
        int i = pow(2, p);

        for (int j = 1; j < n + 1; j++)
        {
            if (j < i + 1)
                cout << i - j << " ";
            else if (j == i + 1)
            {
                cout << i << " ";
            }
            else
                cout << j - 1 << " ";
        }
        cout << "\n";
    }
    return 0;
}