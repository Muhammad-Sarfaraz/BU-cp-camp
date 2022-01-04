/**
 *    author: Sarfaraz
 *    Date: 02-12-2021
**/

#include <bits/stdc++.h>
#include <string>
#define ll long long
#include <algorithm>
#include <chrono>
#include <iostream>
#include<vector>
using namespace std;

// *** task:print all elements in reversed order *** //

void selection_sort()
{
    int temp;
    int arr[]= {0,1,67,2,4,1,9,7,8,6};
    int l=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<l; i++)
    {

        for(int j=i+1; j<l; j++)
        {

            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    // print all elements
    cout<<"Sorted array:"<<endl;
    for(int i=0; i<l; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed sorted array:"<<endl;
     for(int i=l-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }

}

void solve()
{
    selection_sort();

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}





