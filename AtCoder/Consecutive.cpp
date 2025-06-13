#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int sum=0;

    for(int i=0; i<k; i++)
    {
        int a,b;
        cin>>a>>b;

        for(int j=a; j<b; j++)
        {
            if(s[j-1]==s[j])
            {
                sum ++;
            }

        }

        cout<<sum<<"\n";
        sum=0;

    }


    return 0;
}

