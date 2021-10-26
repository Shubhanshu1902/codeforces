#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    int m,n;
    cin>>m>>n;
    
    int intersection = m*n;

    int res = 0;
    //0 for akshat
    //1 for malvika

    while(true)
    {
        m = m-1;
        n = n-1;

        intersection = m*n;

        if(m == 0 || n==0)
        {
            if(res == 0)
            {
                cout<<"Akshat";
            }

            else
            {
                cout<<"Malvika";
            }

            break;
        }

        res = res xor 1;

        //cout<<res<<endl;
    }


    return 0;
}