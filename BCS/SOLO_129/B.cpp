#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,temp;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
       if(k%a[i]==0)
       {
        temp = a[i];
       }
    }
    cout<<k/temp;


    return 0;
}

