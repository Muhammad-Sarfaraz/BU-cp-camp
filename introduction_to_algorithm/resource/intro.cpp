/**
 *    author: Sarfaraz
 *    Date: 08-11-2021
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

   long long a=0;

  auto s = chrono::steady_clock::now();
   for(int i=0;i<1000000000;i++){
    a+=i;
   }
   auto e = chrono::steady_clock::now();
   auto diff = s - e;

  cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

