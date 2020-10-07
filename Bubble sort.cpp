#include<iostream>
using namespace std;
int main()
{   int n,temp,flag=0;
    cout<<"Enter the size of array"<<"\n";
    cin>>n;
	int A[n];
	cout<<"Enter the element of array"<<"\n";
	for(int i=0;i<n;i++)
	cin>>A[i];
	for(int i=0;i<n-1;i++)
	{   flag=0;
		for(int j=0;j<n-1-i;j++)
		{
		if(A[j]>A[j+1])
		{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		    flag=1;
		}}
		if(flag==0)
		break;
	}
	for(int i=0;i<n;i++)
	cout<<A[i]<<" ";
return 0;
}
