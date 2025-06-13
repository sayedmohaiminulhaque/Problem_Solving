
//****IN THE NAME OF ALLAH****
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
    //cin>>tc;
    for(ll test=0; test<tc; test++)
    {
        vector<ll>v;
        ll n;
        cin>>n;
        ll c=0;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            c=0;
            while(a[i]%2==0)
            {
                a[i]=a[i]/2;
                c++;
            }
            v.push_back(c);
        }
        cout<<*min_element(v.begin(),v.end());

    }


    return 0;
}
