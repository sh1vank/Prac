

#include <iostream>
#include<string.h>
#include<cmath>

using namespace std;
int main() {
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	if(abs(x1-x2)!=0&&abs(y1-y2)==0)
	{
		cout<<x1<<" "<<y1+abs(x1-x2)<<" "<<x2<<" "<<y2+abs(x1-x2)<<"\n";
	}
	else if(abs(x1-x2)==0&&abs(y1-y2)!=0)
	{
		cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x2+abs(y1-y2)<<" "<<y2<<"\n";
	}
	else if(abs(x1-x2)==abs(y1-y2))
	{
		cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<"\n";
	}
	else
	{
		cout<<-1<<"\n";
	}
    return 0;
}