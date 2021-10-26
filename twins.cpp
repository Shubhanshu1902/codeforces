#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    cin>>n;
    vector<int> values;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        values.push_back(m);
        sum+= m;
    }

    sort(values.begin(),values.end());
    int temp = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(sum < temp)
        {
            break;
        }

        else
        {   
            sum = sum - values[n-i-1];
            temp += values[n-i-1];
            count++;
        }
    }
    

    cout<<count;

    
    return 0;
}