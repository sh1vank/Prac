
#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans=min(p/np,min((k*l)/nl,c*d));
    cout<<ans/n<<"\n";
    return 0;
}
