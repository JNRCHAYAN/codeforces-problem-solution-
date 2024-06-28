#include<iostream>
using namespace std;

int main()
{
    int n,i,co=2;
    cin>> n;
    if(n==1)
        {
            cout << "I hate it" ;
        }
    else
    {
        for(i=1;i<=n;i++)
        {
            cout << "I hate that ";
            for(int j=co;j<=i;j++)
            {
            
                cout << "I love";
                if(i==n)
                {
                    cout <<" it";
                    
                }
                else
                {
                    cout <<" that ";
                    break;
                   
                }
            }
            co++;
            

        }
    }

}
