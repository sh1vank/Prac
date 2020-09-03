
#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int *a=new int[n];
    int *b=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j]&&b[i]<b[j]&&i!=j)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Happy Alex"<<"\n";
    }
    else
    {
        cout<<"Poor Alex"<<"\n";
    }
    
    delete [] a;
    delete [] b;
    return 0;
}
