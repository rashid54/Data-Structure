#include<bits/stdc++.h>
using namespace std;

int main()
{
	int data[10],num,n,pos,i;
	cout<<"Enter size of array(max 10 elements) : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>data[i];
	}
	cout<<"Enter the number to search : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(data[i]==num)
		{
			pos=i+1;
			break;
		}
	}
	if(i==n)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at position "<<pos;
	}

	return 0;
}
