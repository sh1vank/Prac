
#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
int main() {
	int n,k;
    cin>>n>>k;
    int a[1001];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxx=INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        maxx=max(maxx,a[i]-a[i+1]-k);
    }
    if(maxx<0)
    {
        cout<<0<<"\n";
    }
    else
    {
        cout<<maxx<<"\n";
    }
    return 0;
}
