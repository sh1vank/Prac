
#include <iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main() {
	int n,k;
    cin>>n>>k;
    int a[2000];
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i]=5-x;
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=k)
        {
            c++;
        }
    }
    if(c<3)
    {
        cout<<0<<"\n";
    }
    else if(c==3)
    {
        cout<<1<<"\n";
    }
    else
    {
        if(c%3==0)
        {
            cout<<c/3<<"\n";
        }
        else 
        {
            cout<<c/3<<"\n";
        }
    }
    return 0;
}
