
//****IN THE NAME OF ALLAH****
//****SAYED MOHAIMINUL HAQUE****
#pragma GCC optimize("Ofast")

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define nl "\n"
#define mod 1000000009
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/(__gcd(a,b))))

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll tc=1;
    //cin>>tc;
    for(ll test=0; test<tc; test++)
    {
        ll a,b;
        cin>>a>>b;
        ll ar[3];
        ar[0]=(a+b);
        ar[1]=(a-b);
        ar[2]=(a*b);
        sort(ar,ar+3);
        cout<<ar[2]<<nl;


    }


    return 0;
}
