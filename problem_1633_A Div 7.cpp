#include<iostream>
using namespace std;
int main()
{
    int n,v;
    int co=0;
    cin >>n;
    for(int i=0;i<n;i++)
    {   cin >>v;
            if(v%7!=0)
            {
               co=v/7;
               co=co*7;
               if(co<10)
               {
                co=co*2;
               }
               cout<< co << endl; 
            }
            else
            {
                cout <<v<< endl;
            }
        
    }
}