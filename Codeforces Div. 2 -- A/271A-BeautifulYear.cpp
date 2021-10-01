#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;
 
int unique(int x)
{
    int year=x;
    int a=x/1000;
    int b=(x/100)%10;
    int c=(x/10)%10;
    int d=x%10;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        cout<<year;
        return 1;
    }
}
 
int main()
{
    int y;
    cin>>y;
    for(int i=y+1;i<=9012;i++)
    {
        int flag=unique(i);
        if(flag==1)
            break;
    }
    
    
    return 0;
}