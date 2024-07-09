#include<iostream>
using namespace std;
int main()
{
    int n,zero=0,eight=0;
    cin >> n;
    string ar;
    cin >> ar;
    for(int i=0;i<n;i++)
    {
    
        if(ar[i]=='0')
        {
            zero++;
        }
        else if (ar[i]=='8')
        {
            eight++;
        }
    }
    if(zero==eight)
    {
        cout << zero;
    }
    else if(zero <eight && zero!=0 && eight!=0)
    {
        cout << zero;
    }
    else if(eight <zero && zero!=0 && eight!=0)
    {
        cout << eight;
    }
    else
    {
        cout << 0;
    }
}