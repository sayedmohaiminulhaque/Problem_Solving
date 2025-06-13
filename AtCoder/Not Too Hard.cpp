#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;

        if(a<=k)
        {
            sum +=a;
        }

    }
    cout<<sum;

    return 0;
}
