
#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[100000];
    int b[100000];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        m[a[i]]=b[i];
    }
    int flag=0;
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        if(m[a[i]]>m[a[i+1]])
        {
            flag=1;
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
    return 0;
}
