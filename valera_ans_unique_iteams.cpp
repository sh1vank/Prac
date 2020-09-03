
#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
int main() {
	int n,m;
    cin>>n>>m;
    vector<int> v;
    int x;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int flag=0;
        int a[1000];
        for(int j=1;j<=x;j++)
        {
            cin>>a[j];
            if(a[j]<m)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            v.push_back(i+1);
        }
    }
    cout<<v.size()<<"\n";
    if(v.size()!=0)
    {
         for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
   
    return 0;
}
