#include<iostream>
#include<string>
using namespace std;


int main()
{
    string st;
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> st;
        if(st=="abc")
        {
            cout << "YES" << endl;
        }
        else
        {
            if(st[0]=='a')
            {
                cout << "YES" << endl;
            }
            else if(st[1]=='b')
            {
                cout << "YES" << endl;
            }
            else if(st[2]=='c')
            {
                cout << "YES" << endl;
            }

            else
            {

                cout << "NO" << endl;
            }
            
        }
    }
}