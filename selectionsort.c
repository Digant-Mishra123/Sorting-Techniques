//selection sort
#include<stdio.h>
void main()
{
        int arr[30],n,i,j,temp,min;
        printf("Enter size of array\n");
        scanf("%d",&n);
        printf("Enter elements of array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
		min=i;
                for(j=i+1;j<n-1;j++)
                {
                        if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
        }
        printf("\nSorted array is \n");
        for(i=0;i<n;i++)
        {
                printf("%d\n",arr[i]);
        }
}

