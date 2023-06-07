//wap to implement merge sort
#include<stdio.h>
int merge(int a[],int,int,int);
void mergesort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}
int merge(int a[],int lb,int mid,int ub)
{
	int b[50];
	int i,j,k;
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid)
	{
	    while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}
}
main()
{
	int a[50],n,i;
	int lb=0;
	int ub;
	printf("\nEnter size of array\n");
	scanf("%d",&n);
	printf("\nEnter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	ub=n-1;
	mergesort(a,lb,ub);
	printf("\nSorted Array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

