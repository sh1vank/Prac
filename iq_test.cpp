
#include <iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main() {
	int n;
    cin>>n;
    int a[100];
    int ev=0,od=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]&1)
        {
            od++;
        }
        else
        {
            ev++;
        }
    }
    if(od==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]&1)
            {
                cout<<i+1<<"\n";
            }
        }
    }
    else if(ev==1)
    {
        for(int i=0;i<n;i++)
        {
            if(!(a[i]&1))
            {
                cout<<i+1<<"\n";
            }
        }
    }
    return 0;
}
s