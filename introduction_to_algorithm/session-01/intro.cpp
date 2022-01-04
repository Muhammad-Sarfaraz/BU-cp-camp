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

int getAvg(int a,int b,int c,int d){

    int avg=(a+b+c+d)/4;

    return avg;

}

void solve()
{
    int s;
    s=getAvg(2,3,4,5);

    cout<<s<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}


