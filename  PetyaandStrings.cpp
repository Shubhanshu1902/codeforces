#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string a;
    string b;
    cin>>a>>b;
    int n = a.length();
    string low = "";
    string low_b = "";
    // string res = "";


    for (int i = 0; i < a.length(); i++)
    {
        //  cout<<(int) s[i]<<" ";
        if(a[i] <91)
        {
            low+= (char)(a[i]+32);
        }
        else
            low+= a[i];
        
        if(b[i] <91)
        {
            low_b+= (char)(b[i]+32);
        }
        else
            low_b+= b[i];
    }

    if(low < low_b)
    {
        cout<<-1;
    }

    else if(low>low_b)
    {
        cout<< 1;
    }

    else
        cout<<0;



    return 0;
}
