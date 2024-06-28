#include<iostream>
#include<algorithm>
#include <cctype>
using namespace std;

int main()
{

    char arr[100];
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }

     for(int i = 0; i < n; i++)
      {
        arr[i] = tolower(arr[i]);
    }

    sort(arr,arr+n);
int j=1,co=0;
for(i=0;i<n;i++)
{

    if(arr[i]!=arr[j])
    {

        co++;
    }
    j++;
}
if(co==26)
{

    cout <<"YES";
}
else
    {

        cout <<"NO";

    }


}
