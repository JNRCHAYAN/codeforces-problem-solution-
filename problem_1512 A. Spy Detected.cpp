#include<iostream>
using namespace std;
int main()
{ int n,m,co=0;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >>m;
        int arr[m];
        for(int j=1;j<=m;j++)
        {
            cin >> arr[j];
        }
        for(int k=1;k<=m;k++)
        {
            if(arr[k] != arr[k+1] && arr[k+1] != arr[k+2])
            {
                co=k+1;
                break;
            }
            else if(arr[k]!=arr[k+1] && arr[k+1]==arr[k+2])
            {
                co=k;
                break;
            }
        }
   
        cout << co<< endl;
        co=0;
        
    }
}