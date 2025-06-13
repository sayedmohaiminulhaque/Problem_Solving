
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
    cin>>tc;
    for(ll test=0; test<tc; test++)
    {
        ll n,q;
        cin>>n>>q;

        vector<ll>va;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            va.push_back(a);
        }
        for(ll i=0; i<q; i++)
        {
            ll x,y;
            ll c=0;
            vector<ll>vb;
            cin>>x>>y;
            va[x-1]=y;
            vb=va;
            for(ll j=0; j<n-1; j++)
            {
               // cout<<vb[j]<<" "<<vb[j+1]<<nl;
                c+=min(vb[0],vb[1]);

                if(min(vb[0],vb[1]) == vb[0]) vb.erase(vb.begin()+1);
                else
                {
                    vb.erase(vb.begin()+0);
                }
                c+=vb[0];
            }
            vb.clear();
            cout<<c<<nl;
        }

    }


    return 0;
}

