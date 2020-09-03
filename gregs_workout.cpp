
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i+=3)
    {
        c1+=a[i];
    }
    for(int i=1;i<n;i+=3)
    {
        c2+=a[i];
    }
    for(int i=2;i<n;i+=3)
    {
        c3+=a[i];
    }
    if(c1>c2)
    {
        if(c1>c3)
        {
            cout<<"chest"<<"\n";
        }
        else
        {
            cout<<"back"<<"\n";
        }
    }
    else
    {
        if(c2>c3)
        {
            cout<<"biceps"<<"\n";
        }
        else
        {
            cout<<"back"<<"\n";
        }
        
    }
    
    return 0;
}
