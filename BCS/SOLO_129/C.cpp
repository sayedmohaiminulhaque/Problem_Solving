#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int a,b,c,x,y=0;
        cin>>a>>b>>c;

        for(long long int i=1; i<pow(2,30); i++)
        {
            if(((a^i)<(b^i)) && ((b^i)<(c^i)))
            {
                x=i;
                break;
            }

            else
            {
                y++;
            }
        }

        if(y==pow(2,30)-1)
        {
            cout<<-1<<"\n";
        }

        else
        {
            cout<<x<<"\n";
        }


    }



    return 0;
}
