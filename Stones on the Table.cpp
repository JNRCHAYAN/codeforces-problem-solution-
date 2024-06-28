#include<iostream>
using namespace std;

int main()
{
    int n,i,j,co=0;
    cin>>n;
    char ch[n];

    for(i=0;i<n;i++)
    {

        cin>>ch[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(ch[i]!=ch[j])
            {

             break;
            }
            co++;


        }
    }
    cout << co;
}
