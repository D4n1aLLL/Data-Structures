#include<stdio.h>

void main()
{
	int arr[8]={1,6,8,3,4,5,0,7};
	int n=8;
	for(int i=0;i<8;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(int i=1;i<n-1;i++)
	{
		int j=i-1;
		int temp=arr[i];
		while(i>=0&temp<arr[j])
		{
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			i-=1;
		}
	}
	for(int i=0;i<8;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
