/*
 Danial Ahmed
 Data Structures
 https://github.com/D4n1aLLL/Data-Structures
 */
#include<stdio.h>

void main()
{
	int arr[8]={1,2,3,4,5,6,7,8};
	int n=8,start=0,end=n-1,search=9;
	while(start<=end)
	{
		int mid=(start+end)/2;
		printf("%d\n",mid);
		if(arr[mid]==search)
		{
			printf("Found at %d\n",mid);
			break;
		}
		else if(arr[mid]>search)
		{
			end=mid-1;
			printf("GG\n");
		}
		else
		{
			start=mid+1;
			printf("LL\n");
		}
	}
}
