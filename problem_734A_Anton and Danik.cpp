#include<iostream>
using namespace std;

int main()
{
    string st;
    int n,ato=0,dan=0;
    cin>>n;
    cin >> st;
    for(int i=0;i<n;i++)
    {
        if(st[i]=='A')
        {
            ato++;
        }
        else
        {
            dan++;
        }


    }
    if(ato==dan)
    {
        cout << "Friendship";
    }
    else if(ato>dan)
    {

        cout << "Anton";
    }
    else
    {

        cout << "Danik";
    }


}
