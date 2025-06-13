
#pragma GCC optimize("Ofast")

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <array>
#include <set>
#include <map>
#include <cstring>
#include <queue>
#include <stack>
#include <chrono>
#include <random>
#include <functional>
#include <limits>
using namespace std;

#define ll long long
#define ld long double
#define nl "\n"
#define mod 1000000009
//gcd(m,n)= __gcd(m,n);

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc=1;
    //cin>>tc;
    for(ll test=0; test<tc; test++)
    {
       ll n, d,b,r=0,k=0;
       cin>>n>>d>>b;

       ll a[n];
       for(ll i=0; i<n; i++)
       {
           cin>>a[i];
           if(a[i]<=d)
           {
               k=k+a[i];
               if(k>b)
               {
                   r++;
                   k=0;
               }
           }
       }

       cout<<r<<nl;

    }


    return 0;
}

