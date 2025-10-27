#include <stdio.h>
int main() {
	int arr[100];
	int size;
	int position;
	printf("enter size of an array:");
	scanf("%d",&size);
	printf("enter %d elements of the array:\n",size);
	for(int i =0;i < size;i++)
	{
	scanf("%d",&arr[i]);
	}
	printf("enter the position (0-indexed)of the element to delete:");
	scanf("%d",&position);
	if (position < 0 || position>=size) {
	    printf("invalid position for deletion!\n");
	    }
	else {
	     for (int i=position;i<size -1;i++)
	     {
	      arr[i]=arr[i+1];
	      }
	printf("array after deletion:\n");
	for(int i=0;i<size;i++)
	{
	 printf("%d",arr[i]);
	 }
	 printf("\n");
	 }
	 return 0;
	 }
	
