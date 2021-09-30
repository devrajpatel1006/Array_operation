#include<iostream>
using namespace std;
void merge(int A[],int B[],int lb,int mid,int ub)
{
	int i=lb;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=ub)
	{
		if(A[i]<=A[j])
		{
			B[k]=A[i];
			i++;k++;
		}
		else
		{
			 B[k]=A[j];
			j++;k++;
		}
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			B[k]=A[j];
			j++;k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			B[k]=A[i];
			i++;k++;
		}
		
	}
	for(int k=0;k<ub-lb+1;k++)
	  A[k+lb]=B[k];
}
void mergesort(int A[],int B[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid = (lb+ub)/2;
		
		mergesort(A,B,lb,mid);
		mergesort(A,B,mid+1,ub);
		merge(A,B,lb,mid,ub);
	}
}
int main()
{ int n,i,j,lb,ub,k,mid;
cout<<"Enter the size of array"<<"\n";
cin>>n;
int A[n],B[n];
cout<<"Enter the elements of array"<<"\n";
for(int t=0;t<n;t++)
cin>>A[t];
mergesort(A,B,0,n-1);
//mergesort(A,B,mid+1,n-1);
//merge(A,B,lb,mid,ub);
for(int k=0;k<n;k++)
cout<<B[k]<<" ";
	return 0;
}
int main()
{ int n,i,j,lb,ub,k,mid;
cout<<"Enter the size of array"<<"\n";
cin>>n;
int A[n],B[n];
cout<<"Enter the elements of array"<<"\n";
for(int t=0;t<n;t++)
cin>>A[t];
mergesort(A,B,0,n-1);
//mergesort(A,B,mid+1,n-1);
//merge(A,B,lb,mid,ub);
for(int k=0;k<n;k++)
cout<<B[k]<<" ";
	return 0;
void mergesort(int A[],int B[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid = (lb+ub)/2;
		
		mergesort(A,B,lb,mid);
		mergesort(A,B,mid+1,ub);
		merge(A,B,lb,mid,ub);
	}
} }
