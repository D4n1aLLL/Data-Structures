/*
 *  Danial Ahmed
 *   Data Structures
 *    https://github.com/D4n1aLLL/Data-Structures
 *
*/
#include<stdio.h>

void main()
{
	int n=10;
	int arr[10]={1,6,8,3,4,5,0,7,2,9};
	
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		printf("Switching %d & %d\n",arr[i],arr[min]);
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
