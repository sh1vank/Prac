
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
    
    
    int minn=INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        vector<int> v;
        int maxx=INT_MIN;
        for(int j=0;j<i;j++)
        {
            v.push_back(a[j]);
           
        }
        for(int j=i+1;j<n;j++)
        {
            v.push_back(a[j]);
            
        }
        for(int j=0;j<v.size()-1;j++)
        {
            maxx=max(maxx,v[j+1]-v[j]);
          
        }
        minn=min(minn,maxx);
    }
    cout<<minn<<"\n";
    return 0;
}
