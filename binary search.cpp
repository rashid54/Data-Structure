#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,data[50],num,first,last,middle;
	cout<<"Enter size of array(max 10 elements) : ";
	cin>>n;
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>data[i];
	}
	cout<<"Enter the number to search : ";
	cin>>num;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first<=last)
	{
	    if(data[middle]==num)
		{
			cout<<num<<" found at location "<<middle+1<<endl;
			break;
		}
		else if(data[middle]<num)
		{
			first=middle+1;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<num<<" is not present in the list.";
	}
	return 0;
}
