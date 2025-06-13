#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int sum=0;

    for(int i=1; i<=n; i++)
    {
        int a;
        cin>>a;

        if((i%10 == i/10) && (i>=10))
        {
            for(int j=1; j<=a; j++)
            {
                if((i%10 == j%10)&&(i%10 == j/10) && (j>=10))
                {
                    sum++;
                }
                else if((i%10 == j%10)&&(j<10))
                {
                sum++;

                }

            }


        }
        else if(i<10)
        {
            for(int j=1; j<=a; j++)
            {
                if((i%10 == j%10)&&(i%10 == j/10) && (j>=10))
                {
                    sum++;
                }
                else if((i%10 == j%10)&&(j<10))
                {
                sum++;

                }

            }
        }


    }

    cout<<sum;

    return 0;
}

