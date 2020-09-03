
#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int main() {
    int a,b;
    int c1=0,c2=0,c3=0;
    cin>>a>>b;
    for(int i=1;i<7;i++)
    {
        if(abs(i-a)>abs(i-b))
        {
            c3++;
        }
        if(abs(i-a)<abs(i-b))
        {
            c1++;
        }
        if(abs(i-a)==abs(i-b))
        {
            c2++;
        }
    }
    cout<<c1<<" "<<c2<<" "<<c3<<"\n";
    return 0;
}
