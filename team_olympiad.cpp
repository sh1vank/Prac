#include <iostream>
#include<string.h>
#include<cmath>

using namespace std;
int main() {
	int n;
    cin>>n;
	int a[5000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int c1=0,c2=0,c3=0;
	bool fin[5000];
	for(int i=0;i<n;i++)
	{
		fin[i]=false;
		if(a[i]==1)
		{
			c1++;
		}
		else if(a[i]==2)
		{
			c2++;
		}
		else
		{
			c3++;
		}
		
	}
	int no_of_teams=min(c1,min(c2,c3));
	cout<<no_of_teams<<"\n";
	
	for(int j=0;j<no_of_teams;j++)
	{
		int c1_index=-1,c2_index=-1,c3_index=-1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==1&&fin[i]==false)
			{
				c1_index=i;
				fin[i]=true;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==2&&fin[i]==false)
			{
				c2_index=i;
				fin[i]=true;
				break;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(fin[i]==false&&a[i]==3)
			{
				c3_index=i;
				fin[i]=true;
				break;
			}
		}
		cout<<c1_index+1<<" "<<c2_index+1<<" "<<c3_index+1<<"\n";
	}
    return 0;
}