#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    cin >>n;
    string st;
    for (int i=0;i<n;i++)
    {
        cin >> st;
        if(st=="x++" || st=="X++" || st == "++x" || st == "++X")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x<< endl;
}