#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1||j==5)
			{
				cout<<"*";
			}
			else if(i==3 &&j==3)
			{
				cout<<"*";
			}
			
			else if(i==2 &&j==2 || i==2 && j==4)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";			}
		}
		cout<<endl;
	}
} 
