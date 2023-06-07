//Bubble sort
#include<stdio.h>
void main()
{
	int arr[30],n,i,j,temp;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nSorted array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}


