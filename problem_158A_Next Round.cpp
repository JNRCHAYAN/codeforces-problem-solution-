
#include<iostream>
using namespace std;
int main()
{

    int n,k;
    cin >>n;
    cin >>k;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int fi = arr[k-1],co=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]>=fi && arr[i]!=0)
      {
          co++;
      }

    }
    cout << co;


}
