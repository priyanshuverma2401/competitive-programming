//programme to insert element into an array
#include<bits/stdc++.h>

using namespace std;
#define maxSize 100
int main()
{
	int ele,pos;
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
	cout<<"enter position and element: ";
	cin>>pos>>ele;
	for(int i=n;i>pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos] = ele;
	n++;
	cout<<endl<<"modified array is: ";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"	";
	cout<<endl;
	return 0;
}