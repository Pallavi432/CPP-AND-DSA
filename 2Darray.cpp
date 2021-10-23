#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int key;
	cin>>key;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{if(a[i][j]==key)
			cout<<key<<" is found ";
		
			flag=true;		
		}
		
		
		}

if(flag)
{
	cout<<"Its found"<<endl;
		}		
		else
		{
			cout<<"Not Found";
		}
		
			
}
