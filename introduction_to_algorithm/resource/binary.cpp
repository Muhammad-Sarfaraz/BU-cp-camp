/**
 *    author: Sarfaraz
 *    Date: 25-11-2021
**/

#include <bits/stdc++.h>
#include <string>
#define ll long long
#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
using namespace std;

int bs(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;

    int mid;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        cout << "mid:" << mid << endl;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            // cout<<mid<<endl;
            e = mid - 1;
            cout << e << endl;
        }
        else
        {
            //cout<<mid<<endl;
            s = mid + 1;
            cout << s << endl;
        }
    }

    return -1;
}

void solve()
{

    int arr[] = {1, 2, 10, 11, 19, 29, 28};

    int key = 11;

    int l = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + l);

    cout << bs(arr, l, key) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
