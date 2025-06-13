

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
    cin>>tc;
    for(ll test=0; test<tc; test++)
    {
        cout<<"Case "<<test+1<<": ";
        string s;
        cin>>s;

        if(s[4]==':')
        {
            for(ll i=0; i<4; i++)
            {
                cout<<s[i];
            }
            cout<<"s";
            for(ll i=4; i<s.size(); i++)
            {
                cout<<s[i];
            }
            cout<<nl;
        }
        else
        {
            cout<<s<<nl;
        }

    }


    return 0;
}
