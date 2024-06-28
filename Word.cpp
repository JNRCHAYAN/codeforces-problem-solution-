#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int main()
{
    string st;
    cin >> st;
    int i;
    int up=0,lo=0;
    for(i=0;i<st.length();i++)
    {
       if(st[i]>='A' && st[i]<='Z')
       {
           up++;
       }
       else
       {
           lo++;
       }
    }
    if(up>lo)
    {
       for(int i = 0; i < st.length(); i++) {
        st[i] = toupper(st[i]);
    }
        cout <<st;
    }
    else if(up ==lo)
    {
        for(int i = 0; i < st.length(); i++) {
        st[i] = tolower(st[i]);
    }
        cout <<st;

    }
    else
    {
        for(int i = 0; i < st.length(); i++) {
        st[i] = tolower(st[i]);
    }
        cout <<st;
    }
}
