#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2,s;
    cin>>s1>>s2;

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
            s=s+'0';
        else
            s=s+'1';
    }

    cout<<s;

    return 0;
}