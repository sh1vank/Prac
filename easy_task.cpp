
#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
int main() {
	int n;
    cin>>n;
    char a[100][100];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int c=0;
            if(a[i-1][j]=='o'&&(i-1)>=0&&(i-1)<n)
            {
                c++;
            }
            if(a[i][j-1]=='o'&&(j-1)>=0&&(j-1)<n)
            {
                c++;
            }
            if(a[i][j+1]=='o'&&(j+1)>=0&&(j+1)<n)
            {
                c++;
            }
            if(a[i+1][j]=='o'&&(i+1)>=0&&(i+1)<n)
            {
                c++;
            }
            if(c&1)
            {
                flag=1;
            }
        }
           
    }
    if(flag==1)
    {
        cout<<"NO"<<"\n";
    }
    else
    {
        cout<<"YES"<<"\n";
    }
    
    return 0;
}
