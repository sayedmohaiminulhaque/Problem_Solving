

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
    //cin>>tc;
    for(ll test=0; test<tc; test++)
    {
       ll n,m;
       cin>>n>>m;
       if(m%n==0) cout<<m/n;
       else cout<<__gcd(m/n , (m/n)+(m%n));
    }


    return 0;
}
