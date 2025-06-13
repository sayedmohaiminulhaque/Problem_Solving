#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a,b;
        cin>>a>>b;
        char c[100];

        for(int i=0; i<a.size(); i++)
        {
            if(a[i]==b[i])
            {
                c[i]='.';
            }

            else
            {
                c[i]='*';
            }

        }
        cout<<a<<"\n";
        cout<<b<<"\n";

        for(int i=0; i<a.size(); i++)
        {
            cout<<c[i];
        }
        cout<<"\n\n";

    }


    return 0;
}

