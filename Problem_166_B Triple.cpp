#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,co=0,value=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >>a;
        int arr[a];
        for(int j=0;j<a;j++)
        {
            cin >> arr[j];
        }
         int k = sizeof(arr) / sizeof(arr[0]);
         sort(arr, arr + k);
         for(int l=0;l<a;l++)
         {
            if(arr[l]==arr[l+1])
            {
                if(arr[l+1]==arr[l+2])
                {
                    co=1;
                    value = arr[l];
                    break;

                }
            }
         }

         if(co==1)
         {
            cout<< value <<endl;
            co=0 ;
         }
         else
         {
            co=0;
            cout<<-1 <<endl;
         }
    }
}