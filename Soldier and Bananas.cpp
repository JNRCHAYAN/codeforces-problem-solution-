#include<iostream>
using namespace std;

int main()
{
    int k,n,w,cal=0;
    cin >>k >> n>>w;
    int i;
    for(i=1;i<=w;i++)
    {
        cal=cal+(i*k);

    }
    if(cal>n)
    {
         cout <<cal-n;

    }
   else
   {
       cout << 0;
   }
}
