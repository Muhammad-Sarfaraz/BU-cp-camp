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
    int arr[]= {9,5,2,10,10,119,-1,68,7,10};
    int l=sizeof(arr)/sizeof(arr[0]);
     sort(arr,arr+l);

    int key;
    cin>>key;

    for(int i=0;i<l;i++){
        if(key==arr[i]){
            cout<<"position for machine "<<i<<" value->"<<arr[i]<<" position for human:"<<i+1;
        }
    }
    cout<<endl;

  // o(1) constant -> order of 1

 // o(n) linear -> order of n

 if(binary_search(arr,arr+l,key)){
    cout<<"Found"<<endl;
 }else{
    cout<<"Not found "<<endl;
 }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}




