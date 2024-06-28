#include<iostream>
using namespace std;

int main()
{

    int n,i,a,b,c;
    cin>> n;
    for(i=0;i<n;i++)
    {

        cin >>a>>b>>c;
       if(a!=b && a!=c)
       {
           cout << a << endl;
       }
       else if(b!=a && b!=c)
       {
            cout<<b << endl;
       }
       else
       {
           cout <<c << endl;
       }
    }
}
