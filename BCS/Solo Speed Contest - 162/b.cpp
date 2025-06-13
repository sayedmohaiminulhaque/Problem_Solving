
//****SHEIKH HASINA UNIVERSITY****
//****SAYED MOHAIMINUL HAQUE****
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
#include <bitset>
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
    multiset<ll>ms;
    vector<ll>v;

    v.push_back(0);
    ms.insert(0);

    for(ll i=0; i<128; i++)
    {
        if(ms.count(v[i])==1)
        {
            v.push_back(0);
            ms.insert(0);
        }
        else
        {
            ll k=1;
            for(ll j=i-1; j>=0; j--)
            {
                if(v[j]==v[i])
                {
                    v.push_back(k);
                    ms.insert(k);
                    break;
                }
                else
                {
                    k++;
                }
            }
        }
    }

    cin>>tc;
    for(ll test=0; test<tc; test++)
    {
        ll n;
        cin>>n;
        ll c=0;
        for(ll i=0; i<n; i++)
        {
            if(v[i]==v[n-1]) c++;
        }
        cout<<c<<nl;
    }


    return 0;
}

