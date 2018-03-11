/*
 *  Danial Ahmed
 *   Data Structures
 *    https://github.com/D4n1aLLL/Data-Structures
 *
*/
#include<stdio.h>

void main(){
	
	int arr[6]={5,4,3,2,1,5};
	for(int i=0;i<7;i++)
		printf("%d\t",arr[i]);
		
	int k=3;
	for(int i=k;i<6;i++)
	{
		arr[i]=arr[i+1];
	}
	printf("\n");
	for(int i=0;i<7;i++)
		printf("%d\t",arr[i]);
}
