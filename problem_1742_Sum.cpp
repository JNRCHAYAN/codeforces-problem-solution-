#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
     int a,b,c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a>>b>>c;
            if(a+b==c)
            {
                cout << "YES" << endl;
                break;
             
            }
            else if(b+c==a)
            {
                 cout << "YES" << endl;
                  break;
            }
             else if(a+c==b)
            {
                cout << "YES" << endl;
                  break;
            }
            else
            {
                cout << "NO" << endl;
                  break;
            }

        }
    }
}