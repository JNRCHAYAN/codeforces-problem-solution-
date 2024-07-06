#include<iostream>
using namespace std;
int main()
{
    int n,co=0;
    cin >> n;
    string st;
    for(int i=0;i<n;i++)
    {
         cin  >> st;
         if(st[0]!='c'){ co++;}
         if(st[1]!='o'){co++;}
         if(st[2]!='d'){co++;}
         if(st[3]!='e'){co++;}
         if(st[4]!='f'){co++;}
         if(st[5]!='o'){co++;}
         if(st[6]!='r'){co++;}
         if(st[7]!='c'){co++;}
         if(st[8]!='e'){co++;}
         if(st[9]!='s'){co++;}
         cout << co<< endl;
         co=0;
    }

}
