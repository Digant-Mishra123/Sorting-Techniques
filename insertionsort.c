//insertion sort
#include<stdio.h>
void main()
{
	int arr[30],n,i,j,key;
        printf("Enter size of array\n");
        scanf("%d",&n);
        printf("Enter elements of array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("\nSorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}



