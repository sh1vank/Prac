#include <iostream>
#include<string.h>
#include<cmath>

using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int minn=INT_MAX;
    if(n<m)
    {
        cout<<-1<<"\n";
    }
    else if(n==m)
    {
        cout<<n<<"\n";
    }
    else
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n/2;j++)
            {
                if(i+(2*j)==n&&(i+j)%m==0)
                {
                    minn=min(minn,i+j);
				}
            }
        }
        if(minn==INT_MAX)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<minn<<"\n";

        }
        
    }
    return 0;
}