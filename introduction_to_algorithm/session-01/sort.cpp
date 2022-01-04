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
#include<vector>
using namespace std;

void solve()
{
    int arr[]= {9,5,2,7,10,119,-1,68,10,20};
     int l=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<l; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sort(arr,arr+l);

    for(int i=0; i<l; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}



