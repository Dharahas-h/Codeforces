#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int x[k], temp;
        for (size_t i = 0; i < k; i++)
        {
            cin >> x[i];
        }
        //sorting the input array
        for (size_t i = 0; i < k; i++)
        {
            for (size_t j = i+1; j < k; j++)
            {
                if(x[j] > x[i])
                {
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }
        int s = 0;
        int c = 0;
        for (size_t i = 0; i < k; i++)
        {   
            if (x[i] > c)
            {
                s++;
            }
            else 
            {
                cout << s << endl;
                break;
            }
            c = c + n - x[i];
        }
    }
    return 0;
    
}