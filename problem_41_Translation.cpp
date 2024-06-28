#include<iostream>
using namespace std;

int main()
{

    string st1,st2;
    cin >> st1;
    cin >> st2;
    int n = st1.length(), m=st2.length();

    if(n!=m)
    {

        cout << "NO";

    }
    else
    {
        int j=m-1,co=0;
        for(int i=0;i<n;i++)
        {
            if(st1[i]==st2[j])
            {
                co++;
                j--;
            }
        }


        if(co==n)
        {
             cout << "YES";

        }
        else
        {
            cout << "NO";
        }

    }
}
