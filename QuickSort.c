//Quick Sort
#include<stdio.h>
void quicksort(int a[],int lb,int ub)
{
	int j;
	if(lb<ub)
	{
		j=partition(a,lb,ub);
		quicksort(a,lb,j-1);
		quicksort(a,j+1,ub);
	}
}
int partition(int a[],int lb,int ub)
{
	int i,j,pivot,t;
	i=lb;
	j=ub+1;
	pivot=a[lb];
	while(i<j)
	{
		for(i++;a[i] < pivot && i<=ub;i++);
		for(j--;a[j] > pivot && j>lb;j--);
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[lb];
	a[lb]=a[j];
	a[j]=t;

	return j;
}
void main()
{
	int a[50],n,i,lb=0,ub;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The Given Array is : \n");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	ub=n-1;
	quicksort(a,lb,ub);
	printf("\n");
	printf("\nThe Sorted Array is : \n");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
	
