#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin>>s;
    string low = "";
    string res = "";


    for (int i = 0; i < s.length(); i++)
    {
        //  cout<<(int) s[i]<<" ";
        if(s[i] <91)
        {
            low+= (char)(s[i]+32);
           
        }
        else
            low+= s[i];
    }
    // cout<<low<<endl;

    for(int i= 0;i<low.length();i++)
    {
        if(low[i] != 'a' && low[i] != 'e' && low[i] != 'i' && low[i] != 'o' && low[i] != 'y' && low[i] != 'u')
            res = res + "." + low[i];

    }
    cout<<res;
    return 0;
}