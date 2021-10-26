#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int j = max(max(a,b),c);
    int p,q;

    int exp = 0;

    //a+b+c
    //a+b*c
    //a*b + c
    //a*(b+c)
    //(a+b)*c
    //a*b*c 
    if(a + b*c > exp)
        exp = a+b*c;
    
    if((a+b)*c > exp )
        exp = (a+b)*c;
        
    if(a+b+c > exp)
        exp = a+b+c;

    if(a*b*c > exp)
        exp = a*b*c;

    if(a*(b+c) > exp)
        exp = a*(b+c);

    if(a*b + c > exp)
        exp = a*b +c;


    cout<<exp;

    return 0;
}