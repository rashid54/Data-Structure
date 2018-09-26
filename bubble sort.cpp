#include<bits/stdc++.h>
using namespace std;

void bubblesort(int *data,int n)
{
    for(int i=0;i<(n-1);i++)
	{
		for(int j=0;j<(n-i-1);j++)
		{
			if(data[j]>data[j+1])
			{
				data[j]=data[j]+data[j+1];
				data[j+1]=data[j]-data[j+1];
				data[j]=data[j]-data[j+1];
			}
		}
	}
}
int main()
{
    int n,data[50];
	cout<<"Enter number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(int i=0;i<n;i++)
	{
		cin>>data[i];
	}
	bubblesort(data,n);
	cout<<"The elements after sorting :"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<data[i]<<" ";
	}
	return 0;
}
