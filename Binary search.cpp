#include<iostream>
using namespace std;

int BinarySearch(int n,int A[],int l,int r,int data)
{   
	
	while(l<r)
	{  
		int mid=(l+r)/2;
	    if(data<A[mid])
	      r=mid-1;
	      else if(data==A[mid])
	      return mid;
	    else
	    l=mid+1;	
	}
	return -1;
}

int main()
{   int n,data;
int l=0,r=n-1;
	int mid=(l+r)/2;
cout<<"Enter the size of array"<<"\n";
cin>>n;
	int A[n];
	cout<<"Enter the elements of array in sorted order:"<<"\n";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the data you want to search:"<<"\n";
	cin>>data;
	int result=BinarySearch(n,A,0,n-1,data);
	result==-1 ? cout<<"Element not found" : cout<<"Element found at index: "<<result;
	return 0;
}

