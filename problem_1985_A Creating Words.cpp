#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >>a;
    char ch;
    char arr1[3],arr2[3];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >>arr1[j];
        }
         for(int j=0;j<3;j++)
        {
            cin >>arr2[j];
        }
        ch = arr1[0];
        arr1[0]=arr2[0];
        arr2[0]=ch;
         for(int j=0;j<3;j++)
        {
           cout << arr1[j];
        }
        cout <<" ";
         for(int j=0;j<3;j++)
        {
           cout << arr2[j];
        }
        cout << endl;
        

    }
    
}