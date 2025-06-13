

//****SHEIKH HASINA UNIVERSITY****
//****SAYED MOHAIMINUL HAQUE****
#pragma GCC optimize("Ofast")

#include<bits/stdc++.h>
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
        ll n,k;
        cin>>n>>k;
        ll a[k],b[n];
        set<ll>s;
        for(ll i=0; i<k; i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        for(ll i=0; i<n; i++)
        {
            b[i]=i+1;
        }
        ll t=0;
        for(ll i=0; i<k; i++)
        {
            swap(b[t],b[a[i]-1]);
            t=a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<nl;
    }


    return 0;
}
