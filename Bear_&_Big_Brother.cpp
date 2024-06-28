#include<iostream>
using namespace std;

int main()
{
    int a,b,co=1;
    cin >> a;
    cin >> b;
    for(;;)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            break;

        }
        co++;
    }
    cout << co;
}
