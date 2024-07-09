#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin >> n;
    string st;
    for(int i=0;i<n;i++)
    {
        cin >> st;
        for(int j=0;j<5;j++)
        {
            if(st[j]=='A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if(a>b)
        {
            cout << 'A' << endl;
            a=0;
            b=0;
        }
        else
        {
            cout << 'B' << endl;
            a=0;
            b=0;
        }
    }
}