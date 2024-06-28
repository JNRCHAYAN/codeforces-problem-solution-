#include<iostream>
#include<string>
using namespace std;

int main()
{

    string arr;
    int n,cal=0,la=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin >> arr[j];
        }
        for(int k=0;k<6;k++)
        {
            if(k<=2){
                cal= cal+ arr[k];
            }
            else
            {
                la= la+arr[k];
            }
        }
        if(cal==la)
        {
            cout << "YES" << endl;

        }

        else
        {
                cout << "NO" << endl;


        }
        cal=0,la=0;

    }
}
