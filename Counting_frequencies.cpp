#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {10, 12, 12, 13, 10, 13, 13};
    int len = 7;

    vector<bool> visited(7, false);

    for (int i = 0; i < len; i++)
    {
        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
