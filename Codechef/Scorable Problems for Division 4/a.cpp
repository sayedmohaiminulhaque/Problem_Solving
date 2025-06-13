
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
#define lcm(a,b) (a*(b/(__gcd)))
#define sqr(a) ((a) * (a))

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10);


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc=1;
    //cin>>tc;
    for(ll test=0; test<tc; test++)
    {
        ll n;
        cin>>n;
        n=25-n;
        ll ans=n/4;
        if(n%4!=0) ans++;
        cout<<ans<<nl;

    }


    return 0;
}

