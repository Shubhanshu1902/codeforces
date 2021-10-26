#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s;
    cin >> s;
    int i = 0;
    string temp = "";
    string res = "";

    while (i < s.length())
    {
        temp += s[i];
        res += s[i];

        if (temp.size() >= 3)
        {
            if (temp.substr(temp.size() - 3) == "WUB")
            {
                res = res.substr(0, res.size() - 3);
                if (temp.size() > 3)
                {
                    res += " ";
                }

                temp = "";
            }
        }

        i++;
    }

    cout << res;

    return 0;
}