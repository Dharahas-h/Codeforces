#include <iostream>

using namespace std;

int main()
{   
    int n, t;
    cin >> n >> t;
    int j = 1;
    int a[n-1];
    for (size_t i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    
    for (size_t i = 0; i < n; i++)
    {
        if (j == t)
        {
            cout << "YES";
            return 0;
        }
        else if (j < t)
        {
            j = j + a[j-1];
        }
        else if (j > t)
        {
            cout << "NO";
            return 0;
        }
    }
    return 0;
}
