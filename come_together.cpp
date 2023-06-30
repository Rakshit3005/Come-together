#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if ((y2 - y1) == 0 && (y3 - y1) == 0)
        {
            if ((x2 - x1) >= 0 && (x3 - x1) >= 0)
            {
                cout << min((x2 - x1), x3 - x1) + 1 << endl;
            }
            else if ((x2 - x1) < 0 && (x3 - x1) < 0)
            {
                cout << min(abs(x2 - x1), abs(x3 - x1)) + 1 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if ((x2 - x1) == 0 && (x3 - x1) == 0)
        {
            if ((y2 - y1) >= 0 && (y3 - y1) >= 0)
            {
                cout << min((y2 - y1), y3 - y1) + 1 << endl;
            }
            else if ((y2 - y1) < 0 && (y3 - y1) < 0)
            {
                cout << min(abs(y2 - y1), abs(y3 - y1)) + 1 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if ((y2 - y1) * (y3 - y1) < 0)
        {
            if ((x2 - x1) * (x3 - x1) > 0)
            {
                cout << 1 + min(abs(x2 - x1), abs(x3 - x1)) << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else if((y2 - y1) * (y3 - y1) >0)
        {
            if ((x2 - x1) * (x3 - x1) > 0)
            {
                cout << 1 + min(abs(x2-x1),abs(x3-x1))+min(abs(y2-y1),abs(y3-y1)) << endl;
            }
            else
            {
                cout << 1 + min(abs(y2 - y1), abs(y3 - y1)) << endl;
                //  cout<<1<<endl;
            }
        }
        else

        {
             if ((x2 - x1) * (x3 - x1) > 0)
             {
                cout<<1+min(abs(x2-x1),abs(x3-x1))<<endl;
             }
             else
             {
                cout<<1<<endl;
             }
        }
    }
    return 0;
}