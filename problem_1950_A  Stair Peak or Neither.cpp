#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    int a,b,c;
    for(i=0;i<n;i++)
    {
        cin >>a >>b >>c;
        if( a<b && b<c)
        {
            cout << "STAIR" << endl;
        }
        else if( a<b && b>c)
        {
             cout << "PEAK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }


    }
}