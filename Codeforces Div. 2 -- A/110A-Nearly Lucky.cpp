#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;


void nearlyLucky(long long n)
{
    int dig=0;
    while(n>0)
    {
        int temp=n%10; 
        if(temp==4||temp==7)
            dig++;
        n=n/10;
    }
    
    if(dig==4||dig==7)
        cout<<"YES";
    else
        cout<<"NO";
}

int main()
{
    long long n;
    cin>>n;
    nearlyLucky(n);
    return 0;
}