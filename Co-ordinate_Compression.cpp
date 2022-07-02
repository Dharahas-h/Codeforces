#include <unordered_map>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void sort(int arr[], int len)
{
    for (int j = 0; j < len - 1; j++)
    {
        for (int i = 0; i < len - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {10, 12, 15, 14, 21, 31, 9};
    int temp[7];

    memcpy(temp, arr, 7 * sizeof(int));
    sort(temp, 7);

    unordered_map<int, int> mp;

    int value = 0;
    for (int i = 0; i < 7; i++)
    {
        mp[temp[i]] = value++;
    }

    for (int j = 0; j < 7; j++)
    {
        arr[j] = mp[arr[j]];
    }

    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
