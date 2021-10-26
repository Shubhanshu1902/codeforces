#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> f;

    for(int i= 0;i<m;i++)
    {
        int a;
        cin>>a;
        f.push_back(a);
    }

    sort(f.begin(),f.end());

    int min = f[n-1] - f[0];


    for (int i = 1; i < m-n+1; i++)
    {
        if(f[i+n-1] - f[i] < min)
        {
            min = f[i+n-1] - f[i];
        }
    }

    cout<<min;


}