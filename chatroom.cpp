#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    int count[4] = {0,0,0,0};
    //count[0] = h
    //count[1] = e
    //count[2] = l
    //count[3] = o

    char letters[4] = {'h','e','l','o'};
    int actual[4] = {1,1,2,1};

    string s;
    cin>>s;

    int c = 0;
    int i = 0;

    while(c != s.length())
    {
        if(s[c] != letters[i])
        {
            c++;   
        }

        else if(s[c] == letters[i] && count[i]!= actual[i])
        {
            //cout<<s[c]<<endl;
            count[i]++;
            //cout<<count[i]<<endl;
            if(count[i] == actual[i])
            {
                //cout<<actual[i]<<endl;
                i++;
            }

            c++;
        }

        else
        {
            c++;
        } 

    }

    if(i == 4) cout<<"YES";
    else cout<<"NO";
    return 0;
}