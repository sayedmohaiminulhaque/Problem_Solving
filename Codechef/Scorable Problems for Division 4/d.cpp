
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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll t=0;
        for(ll i=0; i<n;)
        {
            if(s[i]=='0')
            {
                if(i!=0 && i!=n-1)
                {
                    if(s[i-1]=='1')
                    {
                        s[i-1]='0';
                        i++;
                    }

                    else if(s[i+1]=='1')
                    {
                        s[i+1]='0';
                        i+=2;
                    }
                    else
                    {
                        t=1;
                        break;
                    }
                }
                else if(i==0 && i!=n-1)
                {
                    if(s[i+1]=='1')
                    {
                        s[i+1]='0';
                        i+=2;
                    }
                    else
                    {
                        t=1;
                        break;
                    }
                }
                else if(i==n-1 && i!= 0)
                {
                    if(s[i-1]=='1')
                    {
                        s[i-1]='0';
                        i++;
                    }
                    else
                    {
                        t=1;
                        break;
                    }
                }
                else
                {
                    t=1;
                    break;
                }
            }
            else
            {
                i++;
            }

        }
        if(t==0) cout<<"Yes\n";
        else cout<<"No\n";
    }


    return 0;
}

