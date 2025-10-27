#include <stdio.h>
int main() {
	int arr[100];
	int n, i,pos,num;
printf(" enter number of elements(<=100): " );
scanf("%d",&n);
printf("enter %d elements:\n",n);
for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
  }
printf("enter elements to insert:");
scanf("%d",&num);
printf("enter the position to insert(1 to %d):",n+1);
scanf("%d",&pos);
if(pos<1 ||pos>n+1){
	printf("invlid position!\n");
	}
else{
	for(i=n;i>=pos;i--){
	 arr[i]=arr[i-1];
	 }
	 arr[pos-1]=num;
	 n++;
	 printf("array after insertion:\n");
	 for(i=0;i<n;i++){
	   printf("%d ,",arr[i]);
	  }
	  printf("\n");
	  }
	  return 0;
	 }
