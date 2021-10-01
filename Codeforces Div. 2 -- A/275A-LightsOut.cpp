#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;
 
int toggle(int x)
{
    if(x==1)
        return 0;
    else 
        return 1;
}
 
int main()
{
    int grid[3][3],final[3][3]={1,1,1,1,1,1,1,1,1};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>grid[i][j];
        }
    }
  
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(grid[i][j]%2==1)
            {
                final[i][j]=toggle(final[i][j]);
                if((i+1)!=3)
                    final[i+1][j]=toggle(final[i+1][j]);
                if((i-1)!=-1)
                    final[i-1][j]=toggle(final[i-1][j]);
                if((j+1)!=3)
                    final[i][j+1]=toggle(final[i][j+1]);
                if((j-1)!=-1)
                    final[i][j-1]=toggle(final[i][j-1]);
            }
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<final[i][j];
        }
        cout<<endl;
    }
  
  
  
    return 0;
}