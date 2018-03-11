#include<stdio.h>

void main(){
	
	int arr[8]={1,6,8,3,4,5,0,7};
	
	for(int i=0;i<8;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	for(int i=0;i<8-2;i++)
	{
		for(int j=0;j<8-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<8;i++)
	{
		printf("%d\t",arr[i]);
	}
}
