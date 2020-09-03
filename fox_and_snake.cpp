
#include <iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main() {
	int n,m;
    cin>>n>>m;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(!(i&1))
        {
            for(int j=0;j<m;j++)
            {
                cout<<"#";
            }
            cout<<"\n";
        }
        else
        {
            if(flag==0)
            {
                for(int j=0;j<m-1;j++)
                {
                    cout<<".";
                }
                cout<<"#"<<"\n";
                flag=1;
            }
            else
            {
                cout<<"#";
                for(int j=0;j<m-1;j++)
                {
                    cout<<".";
                }
                cout<<"\n";
                flag=0;
            }
        }
    }
    return 0;
}
