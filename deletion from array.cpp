//deleting element from array
//programme to insert element into an array
#include<bits/stdc++.h>

using namespace std;
#define maxSize 100
int main()
{
	int ele,pos,key,index;
	int arr[maxSize];
	
	cout<<"enter total number of current element: ";
	int n;
	cin>>n;
	cout<<"enter elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"current elements are: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"	";
	cout<<endl;
	cout<<"enter the element to delete the element: ";
	cin>>key;
	bool isPresent = false;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			isPresent = true;
			index=i;
			break;
		}
	}
	if(!isPresent)
	{
		cout<<"element is not present in an array. "<<endl;
		exit(0);
	}
	for(int i=index;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	cout<<endl<<"modified array is: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"	";
	cout<<endl;
	return 0;
}