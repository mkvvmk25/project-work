#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void d()
{
    string s = "";
    cin >> s; // 110011101
    int c1 = 0;
    int c0 = 0;
    for (long unsigned int i = 0; i < s.length(); i++)
    {

        if (c1 != 0 && s[i] != '1')
        {
            // for 1s
            cout << c1;
            c1 = 0;
        }
        else if (c0 != 0 && s[i] != '0')
        {
            for(int j = 1; j <= c0-1; j++)
            {
                cout << 0;
            }
            c0 = 0; 
        }

        if (s[i] == '1')
        {
            c1++;
        }
        else
        {
            c0++;
        }
    }
    if (c1 != 0 )
    {
        // for 1s
        cout << c1;
        c1 = 0;
    }
    else if (c0 != 0 )
    {
        for (int j = 1; j <= c0 - 1; j++)
        {
            cout << 0;
        }
        c0 = 0;
    }
}
int main()
{
    d();
}

/*
if (c != 0)
            {
                cout << c;
            }
            if(i == 0 ||
            ( i < s.length() - 1 && s[i] == '0' && s[i-1] == '1') )
            {
                cout << 0;
            }
            c = 0;

 */